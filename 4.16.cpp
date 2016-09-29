#include <iostream>
#include <cmath>
using namespace std;
int main () { 
double a,b,c;
  cin>>a>>b>>c;
  double d,x1,x2,x;
  d= b*b - 4*a*c;
  x1 = -b + sqrt(d) / (2*a);
  x2 = -b - sqrt(d) / (2*a);
  x = -b / 2*a;
   if (d > 0)
  {cout<<x1<<x2;}
  else if (d == 0) 
  {cout<<x;}
return 0;
}