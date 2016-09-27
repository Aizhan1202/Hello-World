#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c;
double l1,l2,l3;
cout<<"inter the sides of the triangle";
cin>>a>>b>>c;
l1=sqrt(b*c*((pow(b,2)+2*c*b+pow(c,2)-pow(a,2)))/(b+c);
l2=sqrt(a*c*((pow(a,2)+2*a*c+pow(c,2)-pow(b,2)))/(a+c);
l3=sqrt(a*b*((pow(a,2)+2*a*b+pow(b,2)-pow(c,2)))/(a+b);
cout<<"l1= "<<l1<<endl<<"l2= "<<l2<<endl<<"l3= "<<l3;
return 0;

}