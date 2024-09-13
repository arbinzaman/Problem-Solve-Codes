#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, bitwiseAND, bitwiseOR, bitwiseXOR;
    cin >> x >> y;

    bitwiseAND = x & y;
    /*
    5 = 101
    6 = 110
    ----
    100
  ------------
    110
    101
    ----
    100
    */
    bitwiseOR = x | y;
    /*
    5 = 101
    6 = 110
    ----
    111
    ----------------
    110
    101
    ----
    111
     */
    bitwiseXOR = x ^ y;
    /*
    1^1 = 0
    1^0 = 1
    0^1 = 1
    0^0 = 0

For example:
    1101
    1010
    ----
    0111
    */

    cout << "bitwiseAND = " << bitwiseAND << endl;
    cout << "bitwiseOR = " << bitwiseOR << endl;
    cout << "bitwiseXOR = " << bitwiseXOR << endl;
}
