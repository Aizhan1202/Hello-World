#include <iostream>
#include <cmath>               
using namespace std;
int main(){
double a,b,c;
double R;
cout<<"Inter definitions of three resistances";
cin>>a>>b>>c;
R=1/(1/a+1/b+1/c);
cout<<"R= "<<R;
return 0;
} 
               