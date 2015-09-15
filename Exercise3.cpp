//**********************************************************
//Exercise 3:
//Name: Jacob Wierman	 Date: 9/22/14
//Session: 0001
//About Program:  4: Produce a diagonal of a square given
//					 the length of a side.
//				  5: Program that computes sigma of 3 with
//				     n being user-defined.
//**********************************************************
// (All functions are assumed under #include <cmath>)
// 1a: y=(2+3*(sqrt(x)))
// 1b: y=((1+pow(x,n))/(1+sqrt(x)))
// 1c: y=(sqrt((1+pow(2,x))/(1+sqrt(x))))
// 1d: y=(5*pow((1+sqrt(x)),n))
//**********************************************************
#include <iostream>
#include <cmath>
using namespace std;
int main ()

{
	double sqside=0, diagonal=0, sum=0;
	int n=0, i=0;
	
	
	{
		cout<<"#4: The Diagonal Program"<<endl;
		cout<<""<<endl;
		
			cout<<"So, gimme a side length of a square.  ";
			cin>>sqside;
			cout<<""<<endl;
		{
			if (sqside<0)
			{
				cout<<"Yeah, that's not a valid answer. Try again."<<endl;
				cout<<""<<endl;
			}
			else
			{
				diagonal=(sqrt(2*(pow(sqside,2))));
				cout<<"Awesome, so the diagonal of that square should be "<<diagonal<<"."<<endl;
				cout<<""<<endl;
		}}}
	
	{
	//NEED HELP WITH 5
		cout<<"#5: The Sigma Thingy"<<endl;
		cout<<""<<endl;
		cout<<"This program will compute the sum of 1+3+3^2+...+3^n"<<endl;
		cout<<"given a user input."<<endl;
		cout<<"Now then, what will be your 'n' value?  ";
		cin>>n;
		cout<<""<<endl;
		{

				for (i=0;i==n;i++)
				{
				sum=sum+pow(3,i);
				}
				cout<<"Okay, so the sum in this case is equal to "<<i<<"."<<endl;
			}}
	return 0;
}