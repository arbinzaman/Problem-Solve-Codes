#include <bits/stdc++.h>
using namespace std;
int main()
{
  for (int i = 0; i <= 10; i++)
  {
    cout << i << " " << "Argentina beats brasil" << endl;
  }

  for (int i = 5; i <= 15; i += 2)
  {
    cout << i << " " << "odd" << endl;
  }

  for (int i = 5; i >= 1; i--)
  {
    cout << i << " " << "countdown" << endl;
  }

  for (int i = -5; i <= 5; i += 2)
  {
    cout << i << endl;
  }

  for (int i = 1; i <= 5; i++)
  {
    cout << i << " " << "break" << endl;
    if (i == 3)
      break;
  }

  for (int i = 1; i <= 5; i++)
  {
    if (i == 3)
      continue;
    cout << i << " " << "Continue" << endl;
  }

  return 0;
}

/**
 * !Basic loop
 */