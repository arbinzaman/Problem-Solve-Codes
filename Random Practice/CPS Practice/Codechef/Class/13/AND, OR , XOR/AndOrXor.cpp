#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 3, y = 5, z = 4, p = 7;
    int result = (((x & y) | z) ^ p);
    cout << result << endl;
    return 0;
}
