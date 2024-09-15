#include <bits/stdc++.h>
using namespace std;
int main (){
    int x ,y;
    cin >> x >> y;
    if((y>=x && y-x<=2) || (y<=x &&  x-y<=3)){
        cout << "Yes" << endl;
   }
    else{
        cout << "No" << endl;
}
    /**
     * !https://atcoder.jp/contests/abc326/tasks/abc326_a
     *   int movingUp = y-x;
         // int movingDown = x-y;

         // if ((movingUp <= 2) && movingDown <=3){
         //     cout<<"YES"<<endl;
         // }
         // else{
         //     cout<<"NO"<<endl;
         // }
         // return 0;
    */
}