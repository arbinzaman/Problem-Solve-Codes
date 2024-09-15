#include <bits/stdc++.h>
using namespace std;
int main (){
    int x ,y;
    cin >> x >> y;
    int movingUp = y-x;
    int movingDown = x-y;

    if (movingUp <= 2 && movingDown <=3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;


    /**
     * !https://atcoder.jp/contests/abc326/tasks/abc326_a
    */
}