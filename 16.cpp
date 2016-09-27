#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c,d;
double A,B,L;
cout<<"inter coordinates: (x1;y1) and (x2;y2)";
cin>>a>>b>>c>>d;
A=c-a;
B=d-b;
L=sqrt(pow(A,2)+pow(B,2));
cout<<"L= "<<L;
return 0;
}
 