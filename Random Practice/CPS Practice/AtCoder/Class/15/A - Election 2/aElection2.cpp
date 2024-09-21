#include <bits/stdc++.h>
using namespace std;
int main (){
    int N,T,A;
    cin>>N>>T>>A;
    int B = N-(T+A);
    if (T>A+B||A>T+B){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
} 