#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c;
double m1,m2,m3;
cout<<"inter the sides of the triangle";
cin>>a>>b>>c;
m1=0.5*sqrt(2*(pow(b,2)+pow(c,2))-pow(a,2));
m2=0.5*sqrt(2*(pow(a,2)+pow(c,2))-pow(b,2));
m3=0.5*sqrt(2*(pow(a,2)+pow(b,2))-pow(c,2));
cout<<"m1= "<<m1<<endl<<"m2= "<<m2<<endl<<"m3= "<<m3;
return 0;

}