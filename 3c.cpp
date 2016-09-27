#include <iostream>
#include <cmath>
using namespace std;
int main (){;
int X,Y,Z;
cin>>X>>Y>>Z;
if (X>=Y&&Y>=Z){
cout<<X*2<<" "<<Y*2<<" "<<Z*2;
}else{
cout<<X<<Y<<Z;}
return 0;
}