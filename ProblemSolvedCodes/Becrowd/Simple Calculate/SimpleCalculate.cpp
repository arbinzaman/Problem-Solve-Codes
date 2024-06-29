#include <bits/stdc++.h>
using namespace std;
int main()
{
    double total, CodeOFProduct, NumberOfUnitsOfProductOne, PriceForOneUnitOne, CodeOFProductTwo, NumberOfUnitsOfProductTwo, PriceForOneUnitTwo;

    cin >> CodeOFProduct >> NumberOfUnitsOfProductOne >> PriceForOneUnitOne;
    cin >> CodeOFProductTwo >> NumberOfUnitsOfProductTwo >> PriceForOneUnitTwo;
    total = (NumberOfUnitsOfProductOne * PriceForOneUnitOne) + (NumberOfUnitsOfProductTwo * PriceForOneUnitTwo);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}
