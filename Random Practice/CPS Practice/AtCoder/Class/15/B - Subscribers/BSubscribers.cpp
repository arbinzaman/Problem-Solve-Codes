#include <bits/stdc++.h>
using namespace std;
int main (){
int n ;
cin >> n;

if  (n < 1000){
    cout << n;
}
else if (n < 10000){
    cout << (n/10)*10 << endl;
}
else if (n < 100000){
    cout << (n/100)*100 << endl;
}
else if (n < 1000000){
    cout << (n/1000)*1000 << endl;
} 
else if (n < 10000000){
    cout << (n/10000)*10000 << endl;
}
else if (n < 100000000){
    cout << (n/100000)*100000 << endl;
}
else if (n < 1000000000){
    cout << (n/1000000)*1000000 << endl;
}


    return 0;
}

/**
 * TODO:  Problem link
 * ! https://atcoder.jp/contests/abc304/tasks/abc304_b
*/