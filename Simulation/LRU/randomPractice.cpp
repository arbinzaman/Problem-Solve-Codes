#include <iostream>
#include <vector>
using namespace std;

int findLRU(const vector<int>& time, int n) {
    int minimum = time[0], pos = 0;
    for (int i = 1; i < n; ++i) {
        if (time[i] < minimum) {
            minimum = time[i];
            pos = i;
        }
    }
    return pos;
}

int main() {
    int frames, pages, page_faults = 0, pos, counter = 0;

    cout << "Enter the number of frames: ";
    cin >> frames;

    cout << "Enter the number of pages: ";
    cin >> pages;

    vector<int> frame(frames, -1); // Use -1 to indicate empty frames
    vector<int> time(frames, 0);  // Track page usage
    vector<int> page_sequence(pages);

    cout << "Enter the page sequence: ";
    for (int i = 0; i < pages; ++i) {
        cin >> page_sequence[i];
    }

    // LRU Page Replacement process
    for (int i = 0; i < pages; ++i) {
        int found = 0;

        // Check if page is already in a frame
        for (int j = 0; j < frames; ++j) {
            if (frame[j] == page_sequence[i]) {
                found = 1;
                counter++;
                time[j] = counter; // Update the time of reference
                break;
            }
        }

        // If page is not found, it is a page fault
        if (!found) {
            // Check if there's an empty frame
            for (int j = 0; j < frames; ++j) {
                if (frame[j] == -1) {
                    page_faults++;
                    frame[j] = page_sequence[i];
                    counter++;
                    time[j] = counter;
                    found = 1;
                    break;
                }
            }

            // If no empty frame, replace the least recently used page
            if (!found) {
                pos = findLRU(time, frames);
                frame[pos] = page_sequence[i];
                counter++;
                time[pos] = counter;
                page_faults++;
            }
        }

        // Display current state of frames after each page request
        cout << "Page " << page_sequence[i] << " -> Frames: ";
        for (int j = 0; j < frames; ++j) {
            if (frame[j] != -1)
                cout << frame[j] << " ";
            else
                cout << "- ";
        }
        cout << endl;
    }

    // Output total page faults
    cout << "\nTotal Page Faults = " << page_faults << endl;

    return 0;
}
