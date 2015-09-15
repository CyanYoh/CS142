#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int x, y, z;
x=10;
y=pow(x,2);
z=(x+y)/2;

x*=2;
y/=x;
z%=3;
x=z/x;

return 0;
}