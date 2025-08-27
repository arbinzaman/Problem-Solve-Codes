// Optimal Page Replacement Algorithm


#include <bits/stdc++.h>
using namespace std;

int main() {
    int no_of_frames, no_of_pages;
    vector<int> frames(10, -1), pages(30), temp(10, -1);
    int flag1, flag2, flag3, pos, max, faults = 0;

    cout << "Enter number of frames: "<< endl;
    cin >> no_of_frames;

    cout << "Enter number of pages: "<< endl;
    cin >> no_of_pages;

    cout << "Enter page reference string: ";
    for (int i = 0; i < no_of_pages; ++i) {
        cin >> pages[i];
    }

    for (int i = 0; i < no_of_pages; ++i) {
        flag1 = flag2 = 0;

        for (int j = 0; j < no_of_frames; ++j) {
            if (frames[j] == pages[i]) {
                flag1 = flag2 = 1;
                break;
            }
        }

        if (flag1 == 0) {
            for (int j = 0; j < no_of_frames; ++j) {
                if (frames[j] == -1) {
                    faults++;
                    frames[j] = pages[i];
                    flag2 = 1;
                    break;
                }
            }
        }

        if (flag2 == 0) {
            flag3 = 0;

            for (int j = 0; j < no_of_frames; ++j) {
                temp[j] = -1;
                for (int k = i + 1; k < no_of_pages; ++k) {
                    if (frames[j] == pages[k]) {
                        temp[j] = k;
                        break;
                    }
                }
            }

            for (int j = 0; j < no_of_frames; ++j) {
                if (temp[j] == -1) {
                    pos = j;
                    flag3 = 1;
                    break;
                }
            }

            if (flag3 == 0) {
                max = temp[0];
                pos = 0;

                for (int j = 1; j < no_of_frames; ++j) {
                    if (temp[j] > max) {
                        max = temp[j];
                        pos = j;
                    }
                }
            }

            frames[pos] = pages[i];
            faults++;
        }

        cout << endl;
        for (int j = 0; j < no_of_frames; ++j) {
            if (frames[j] != -1)
                cout << frames[j] << "\t";
            else
                cout << "-\t";
        }
    }

    cout << "\n\nTotal Page Faults = " << faults << endl;

    return 0;
}
