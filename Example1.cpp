#include <iostream>
#include <cmath>
using namespace std;
int main ()

{
double A, r;

cout<<"Give me the area of a circle.  ";
cin>>A;
cout<<""endl;

if (A>=0)
{
	r=(sqrt(A/3.14))
	cout<<"So, the radius is "r"."<<endl;
}
	else
{
	cout<<"That's not a positive area."<<endl;
}
	return 0;
}