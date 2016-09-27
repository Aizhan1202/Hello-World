#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c;
double h1,h2,h3,S,p;
cout<<"inter the sides of the triangle";
cin>>a>>b>>c;
p=(a+b+c)/2;
S=sqrt(p*((p-a)*(p-b)*(p-c)));
h1=2*S/a;
h2=2*S/b;
h3=2*S/c;
cout<<"h1= "<<h1<<endl<<"h2= "<<h2<<endl<<"h3= "<<h3;
return 0;

}