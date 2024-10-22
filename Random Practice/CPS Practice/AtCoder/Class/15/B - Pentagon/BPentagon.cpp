#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    int dis1 = abs(b - a);
    if (dis1 > 2){
        dis1 = 5 - dis1;
    }
    int dis2 = abs(d-c);
    if (dis2 > 2){
        dis2 = 5 - dis2;
    }
    if(dis1 == dis2){
        cout << "Yes"<<endl;
    }
    else{
        cout << "No"<<endl;
    }
    return 0;
}

/**
 * TODO:  Problem link
 * ! https://atcoder.jp/contests/abc304/tasks/abc304_b
 * ? Done with help of ASCII code of characters
 * ? The distance between two characters is the difference between their ASCII values
 * ? If the distance is greater than 2, then the distance is 5 - distance
 * ? If the distance between the two characters is same, then the answer is Yes
 * ? Else the answer is No
 */