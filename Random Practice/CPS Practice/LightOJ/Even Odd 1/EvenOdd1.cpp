#include <bits/stdc++.h>
using namespace std;
int main()

{
  int tc, num,x;
  cin >>tc;
 for(x=1; x<=tc; x++){
    cin >> num;
    if(num % 2 == 0){
      cout <<"even" << endl;
    }
    else{
      cout <<"odd" << endl;
    }
 }

  return 0;
}
