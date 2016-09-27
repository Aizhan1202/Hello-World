#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c,H;
double V,S,p;
cout<<"inter the sides of base of pyramid and the height";
cin>>a>>b>>c>>H;
p=(a+b+c)/2;
S=sqrt(p*((p-a)*(p-b)*(p-c)));
V=(S*H)/3;
cout<<"V= "<<V;
return 0;
}




