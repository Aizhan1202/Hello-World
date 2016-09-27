#include <iostream>
using namespace std;
int main (){
int X,Y,R;
cin>>X>>Y>>R;
if ((sqrt(X*X+Y*Y))<R)
{cout<<"Insuie the circle";}
else
{cout<<"Outside the circle";}
return 0;
}