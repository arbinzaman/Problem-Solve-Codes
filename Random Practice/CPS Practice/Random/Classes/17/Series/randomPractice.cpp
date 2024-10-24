#include <bits/stdc++.h>
using namespace std;
int main()
{
  int l, r, d, sum = 0;
  cin >> l >> r >> d;
  for (int i = l; i <= r; i += d)
  {
    sum += i;
    cout << sum << endl;
  }

  return 0;
}

/**
 * !Basic loop
 */