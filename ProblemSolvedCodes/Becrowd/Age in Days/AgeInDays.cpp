#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age, days, month, years, aux;
    cin >> age;
    years = age / 365;
    cout << years << " ano(s)" << endl;
    aux = (age % 365);
    month = aux / 30;
    cout << month << " mes(es)" << endl;
    days = (aux % 30);
    cout << days << " dia(s)" << endl;
    return 0;
}
