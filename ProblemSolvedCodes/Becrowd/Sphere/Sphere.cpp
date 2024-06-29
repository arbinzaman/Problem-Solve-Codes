#include <bits/stdc++.h>
using namespace std;
int main()
{
    double  total, radius;
    cin >> radius ;
    total = (4.0/3) * 3.14159 * pow(radius, 3);
   
    cout << "VOLUME = " << fixed << setprecision(3) << total << endl;
    return 0;
}
