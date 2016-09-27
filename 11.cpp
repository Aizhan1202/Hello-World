#include <iostream>
#include <cmath>
using namespace std;
int main(){
double R;
double S,s1,s2,r=20,p=3.14;
cout<<"inter a radius R>20";
cin>>R;
s1=p*pow(R,2);
s2=p*pow(r,2);
S=s1-s2;
cout<<"S= "<<S
return 0;
}