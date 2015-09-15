//****************************************************************
//Program 2--The Tuition Bill Program
//Name: Jacob Wierman		Date:9-8-14
//Session 0002
//Description: Determines tuition cost based 
//on number of credit hours taken.
//****************************************************************
#include <iostream>
using namespace std;
int main()
{
	double c;
	
	cout<<"** Welcome to the Tuition Calculator! **"<<endl;
	cout<<""<<endl;
	while (c!=(-1))
	{
	cout<<"How many credit hours? (-1 to exit): ";
	cin>>c;
	{
		if ((0<=c) && (c<=11)) {
			cout<<"Your tuition bill is: $"<<(1310*c)<<".00 per semester."<<endl;
			cout<<""<<endl;
		}
		else if ((12<=c) && (c<=20)) {
			cout<<"Your tuition bill is: $15555.00 per semester."<<endl;
			cout<<""<<endl;
		}
		else if (20<c) {
			cout<<"Your tuition bill is: $"<<15555.00+1310*c<<".00 per semester."<<endl;
			cout<<""<<endl;
		}
		else if (c<(-1)) {
			cout<<"That is not a valid response."<<endl;
			cout<<""<<endl;
		}
		else if (c=(-1)) {
			cout<<"Good luck paying for college."<<endl;
		}}}
	return 0;
}