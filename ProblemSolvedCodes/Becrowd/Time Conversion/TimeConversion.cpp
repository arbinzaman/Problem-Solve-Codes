#include <bits/stdc++.h>
using namespace std;
int main()
{
    int time, sec, min, hour, aux;
    cin >> time;
    hour = time / 3600;
    // cout << hour << endl;
    aux = (time % 3600);
    min = aux / 60;
    // cout << min << endl;
    sec = (aux % 60);
    // cout << sec << endl;
    cout << hour << ":" << min << ":" << sec << endl;
    return 0;
}
