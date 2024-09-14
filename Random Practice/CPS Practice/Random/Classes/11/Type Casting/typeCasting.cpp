#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, n;
    cin >> x;
    x = 5 / 2; // 5/2 = 2.5 but x is double so it will store 2.0

    n = 5.0 / 2; // 5/2 = 2.5 but n is int so it will store 2
    cout << "without typeCasting = " << x << endl;
    cout << "with typeCasting = " << n << endl;

    // An Other Example
    int a = 5, b = 2;
    double c = (double)a / b;
    cout << "c = " << c << endl;

    // An Other Example
    int d = 5, e = 2;
    double f = 1.0 * d / e;
    cout << "f = " << f << endl;

    // if one of the operand is double then the result will be double

    // math operations works from left to right " * / " priority are same and "+ -" priority are same
}
