#include <iostream>
#include <cmath>
using namespace std;
int main () {
int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  int dx = abs(x1 - x2);
  int dy = abs(y1 - y2);
  
 if (dx + dy == 1)
    {cout<<"YES";}
  else
    if (dx + dy == 2 && dx == 1 && dy == 1)
      {cout<<"YES";}
    else
      {cout<<"NO";}
return 0;
}
