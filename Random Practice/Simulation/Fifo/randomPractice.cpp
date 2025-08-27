//FIFO 
#include <bits/stdc++.h>
using namespace std;

bool isPageInMemory(const vector<int>& frames, int page) {
    for (int frame : frames) {
        if (frame == page) {
            return true;
        }
    }
    return false;
}

void printFrames(const vector<int>& frames) {
    for (int frame : frames) {
        if (frame != -1)
            cout << frame << " ";
        else
            cout << "- ";
    }
    cout << endl;
}

int main() {
    int numFrames, numPages, pageFaults = 0, pageHits = 0;

    cout << "Enter the number of frames: "<< endl;
    cin >> numFrames;

    cout << "Enter the number of pages: " << endl;
    cin >> numPages;

    vector<int> frames(numFrames, -1);
    vector<int> pages(numPages);

    cout << "Enter the page sequence:" << endl;
    for (int i = 0; i < numPages; i++) {
        cin >> pages[i];
    }

    int nextReplaceIndex = 0;
    for (int i = 0; i < numPages; i++) {
        int page = pages[i];

        if (!isPageInMemory(frames, page)) {
            pageFaults++;
            frames[nextReplaceIndex] = page;
            nextReplaceIndex = (nextReplaceIndex + 1) % numFrames;
        } else {
            pageHits++;
        }

        cout << "Page " << page << " -> Frames: ";
        printFrames(frames);
    }

    cout << "Total page faults: " << pageFaults << endl;
    cout << "Total page hits: " << pageHits << endl;

    return 0;
}
