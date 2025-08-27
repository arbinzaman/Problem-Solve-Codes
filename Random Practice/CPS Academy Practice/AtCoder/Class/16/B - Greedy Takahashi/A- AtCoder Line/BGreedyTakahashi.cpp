#include <bits/stdc++.h>
using namespace std;
int main (){
long long a,b,k;    
cin>>a>>b>>k;
if(k<=a){
    cout<<a-k<<" "<<b<<endl;
}

else {
    k=k-a;
    if(k<=b){
    cout<<"0 "<<(b-k)<<endl;
}
    else{
    cout<<"0 0"<<endl;
}
}
 return 0;
}

/**
 * TODO:  Problem link
 * ! https://atcoder.jp/contests/abc149/tasks/abc149_b
*/