#include <iostream>
#include <vector>
using namespace std;

int main() {
    int no_of_frames, no_of_pages, faults = 0;

    cout << "Enter number of frames: ";
    cin >> no_of_frames;

    cout << "Enter number of pages: ";
    cin >> no_of_pages;

    vector<int> frames(no_of_frames, -1); // Initialize frames to -1
    vector<int> recent(no_of_frames, -1); // Initialize recent usage to -1
    vector<int> pages(no_of_pages);

    cout << "Enter page reference string: ";
    for (int i = 0; i < no_of_pages; ++i) {
        cin >> pages[i];
    }

    for (int i = 0; i < no_of_pages; ++i) {
        bool flag1 = false, flag2 = false;

        // Check for page hit
        for (int j = 0; j < no_of_frames; ++j) {
            if (frames[j] == pages[i]) {
                flag1 = flag2 = true;
                recent[j] = i; // Update the most recent usage index
                break;
            }
        }

        // If page miss, find a place to insert the page
        if (!flag1) {
            for (int j = 0; j < no_of_frames; ++j) {
                if (frames[j] == -1) { // If there's an empty frame
                    frames[j] = pages[i];
                    recent[j] = i; // Record its usage index
                    faults++;
                    flag2 = true;
                    break;
                }
            }
        }

        // If no empty frame, replace the MRU page
        if (!flag2) {
            int pos = 0; // Assume the first frame is the most recently used
            for (int j = 1; j < no_of_frames; ++j) {
                if (recent[j] > recent[pos]) { // Compare usage indices
                    pos = j;
                }
            }
            frames[pos] = pages[i]; // Replace the most recently used
            recent[pos] = i; // Update its usage index
            faults++;
        }

        // Print the current frame status
        cout << "\nPage " << pages[i] << " -> Frames: ";
        for (const auto& frame : frames) {
            if (frame != -1)
                cout << frame << "\t";
            else
                cout << "-\t";
        }
    }

    cout << "\n\nTotal Page Faults = " << faults << endl;
    return 0;
}