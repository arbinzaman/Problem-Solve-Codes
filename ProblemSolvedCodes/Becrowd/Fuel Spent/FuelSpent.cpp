#include <bits/stdc++.h>
using namespace std;
int main()
{
    float hour, distance, totalDistance, millage;
    cin >> hour >> distance;
    totalDistance = hour * distance;
    millage = totalDistance / 12;
    cout << fixed << setprecision(3) << millage << endl;
    return 0;
}
