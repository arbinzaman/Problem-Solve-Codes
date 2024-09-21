#include <bits/stdc++.h>
using namespace std;
int main (){
    int N,T,A;
    int B = N-(T+A);
    if (T>A+B||A>T+B){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
} 