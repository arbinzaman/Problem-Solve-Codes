#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int result = n|1;
    result = result & (~2);
cout<<result <<endl;
   int resultXOR = result ^ (1<<2);
    cout<<resultXOR;
    return 0;

    /**
     * TODO https://www.codechef.com/practice/course/bit-manipulation/BITMF/problems/BITMEDU2
     *? First Task?
     * ! 8 4 2 1 
     * ! 1 0 1 0
     * ! 0 0 0 1 Bitwise OR With 1
     * ! 1 0 1 1
     * 
     * ? Second Task ?
     * ! 8 4 2 1 (11)
     * ! 1 0 1 1
     * ! 0 0 1 0 (2)
     * ! 1 1 0 1 (Not ~2) and Run And operation
     * ! 1 0 0 1 (9)
     * 
     * 
     *? Third Task?
     * ! 8 4 2 1 (11)
     * ! 1 0 0 1
     * ! if we want to flip 2nd bit we can use XOR with 1<<2
     * ! 0 1 0 0 (4)
     * ! in code we can use result ^ (1<<2) means Third bit and left shit two
     * 
    */
}