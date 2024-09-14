#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int first = x % 2;
    x = x / 2;
    int second = x % 2;
    x = x / 2;
    int third = x % 2;
    x = x / 2;
    int fourth = x % 2;
    x = x / 2;

    cout << "binary of : " << x << first << second << third << fourth << endl;
}
