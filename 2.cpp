#include<iostream>
#include<cmath>
using namespace std;
int main(){
double  h,r,R;
double V,S,l,p=3.14;
cin>>h>>r>>R;
l=sqrt(pow(h,2)+pow((R-r),2));
S=(p*l*(R+r))+p*(pow(R,2)+pow(r,2));
V=(p*h/3*(pow(R,2)+pow(r,2)+(R*r)));
cout<<"V= "<<V<<endl;
cout<<"S= "<<S;
return 0;
}
