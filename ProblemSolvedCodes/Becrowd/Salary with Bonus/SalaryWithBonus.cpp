#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Name;
    double SellersSalary, WorkedHours,TotalSoldByHim, SALARY;

    cin >>Name>> SellersSalary >>TotalSoldByHim;
    SALARY = SellersSalary + (TotalSoldByHim * 15) / 100;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << SALARY << endl;
    return 0;
}
