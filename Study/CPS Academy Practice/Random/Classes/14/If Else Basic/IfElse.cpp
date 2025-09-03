#include <bits/stdc++.h>
using namespace std;
int main()
{
   int budget ;
    cin >> budget;
    cout <<budget<<endl;
    if(budget > 100)
    {
        cout << "Buy a packet of pencils"<<endl;
    }
    else if (budget>20)
    {
        cout << "Buy a 2 pencil"<<endl;
    }

   else  if (budget>10)
    {
        cout << "Buy a 1 pencil"<<endl;
    }
    else
    {
        cout << "Get 20 taka from Bkash"<<endl;
    }
}
