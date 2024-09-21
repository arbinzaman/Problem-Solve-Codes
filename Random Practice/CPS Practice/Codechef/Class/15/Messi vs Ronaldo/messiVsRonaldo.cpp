#include <bits/stdc++.h>
using namespace std;
int main(){
    int A, B , X , Y;
    cin >> A >> B >> X >> Y;
    A = A * 2 ;
    X = X * 2 ;
    int messi  = A + B;
    int ronaldo = X + Y;
    if (messi > ronaldo){
        cout<<"Messi"<<endl;
    }
    else if (ronaldo>messi)
    {
        cout<<"Ronaldo"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}