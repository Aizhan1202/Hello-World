#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,c;
double b,r,p;
cin>>a>>c;
b=sqrt(pow(c,2)-pow(a,2));
p=(a+b+c)/2;
r=sqrt(((p-a)*(p-b)*(p-c))/p);
cout<<"r= "<<r;
return 0;

}
                          