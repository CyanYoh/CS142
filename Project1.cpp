//**************************************************************
//Program 1--Fahrenheit and Centigrade
//Jacob Wierman		Date: 9/4/2014
//Session 0001
//About Program: Program simulates an automatic fahrenheit
//to centigrade temperature converter.
//**************************************************************
#include <iostream>
using namespace std;
int main()
{
	double f, c, s;
	
	cout<<""<<endl;
	cout<<"Welcome to the UNWEDGE Weather Program!"<<endl;
	cout<<""<<endl;
	cout<<"This program will convert degrees Fahrenheit"<<endl;
	cout<<"to degrees Centigrade."<<endl;
	cout<<""<<endl;
	cout<<"Now then, please enter the current"<<endl;
	cout<<"temperature in degrees Fahrenheit."<<endl;
	cin>>f;
	
	c=(5.0/9)*(f-32);
	
	cout<<""<<endl;
	cout<<"Calculation complete."<<endl;
	cout<<""<<endl;
	cout<<"The temperature is currently"<<endl;
	cout<<c<<" degrees Centigrade."<<endl;
	cout<<""<<endl;
	{
		if (f < 20) {
			cout<<"Rather cold, wouldn't you say?"<<endl;
		}
		else if (f > 85) {
			cout<<"It's a tad hot for my taste."<<endl;
		}
		else {
		}
	}
	cout<<""<<endl;
	cout<<"Have a pleasant day. Goodbye."<<endl;
	
	return 0;
}
