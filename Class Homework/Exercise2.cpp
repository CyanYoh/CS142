//************************************************************
//Exercise 2:
//Jacob Wierman		Date:9/19/2014
//Session: 0001
//About Program: 4: Calculates the remainder when the larger of
//					two integers is divided by the smaller.
//				 5: Will tell is number is multiple of 3.
//************************************************************
//1a.  ((2*x+1)/(x+1))
//1b.  ((3*x+10)*(y+x))
//1c.  ((2<x) && (x<10))
//1d.  ((x<2) || (x>8))
//1e.  (x!=(-10))
//************************************************************
#include <iostream>
using namespace std;
int main ()

{
	int threeprospect, mult, roundquo;
	double round1, round2;

	
	{
		cout<<"#4: Remainder of an Integer Quotient"<<endl;
		cout<<""<<endl;
		cout<<"Enter a decimal number: ";
		cin>>round1;
		cout<<""<<endl;
		cout<<"Enter another decimal number: ";
		cin>>round2;
		cout<<""<<endl;
		(int) round1, round2;
		{
			if (round1>round2)
			{	
				((int)round1%(int)round2)==roundquo;
				cout<<"The remainder of "<<(int)round1<<" divided by "<<(int)round2<<" is: "<<(int)roundquo<<endl;
			}
			
			else
			{
				((int)round2%(int)round1)==roundquo;
				cout<<"The remainder of "<<(int)round2<<" divided by "<<(int)round1<<" is: "<<(int)roundquo<<endl;
			}
			cout<<""<<endl;
			cout<<""<<endl;
		}
		
	}
	{
	
	cout<<"#5: Multiples of Three"<<endl;
	cout<<""<<endl;
	cout<<"Enter an integer: ";
	cin>>threeprospect;
	cout<<""<<endl;
	
	{
		if ((threeprospect%3)==0)
		{
			(threeprospect/3)==mult;
			cout<<threeprospect<<" is indeed a multiple of 3. It is equal to "<<mult<<" times 3."<<endl;
		}
		
		else
		{
			cout<<threeprospect<<" isn't a multiple of 3."<<endl;
		}
	}
		return 0;
	}}