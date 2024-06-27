#include <bits/stdc++.h>
using namespace std;
int main()
{
    float NumberOfEmployee, WorkedHours, PaymentPerHour, SALARY;

    cin >> NumberOfEmployee >> WorkedHours >> PaymentPerHour;
    SALARY = WorkedHours * PaymentPerHour;

    cout << "NUMBER = " << NumberOfEmployee << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << SALARY << endl;
    return 0;
}
