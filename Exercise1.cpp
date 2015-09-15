//**************************************************************
//Exercise 1: 3-4
//Jacob Wierman		Date: 9/8/2014
//Session 0001
//About Program: 3: Averages the digits in a two-digit number
//				 4: Reverses order of three-digit number
//**************************************************************
#include <iostream>
using namespace std;
int main ()

{
	int twodigit, avg10, avg1, threedigit, rev100, rev10, rev1;
	
{
	cout<<"#3: Two-Digit Average Program" <<endl;
	
	while (twodigit<10 || twodigit>99)
	{
	cout<<""<<endl;
	cout<<"Enter a two digit number: ";
	cin>>twodigit;
	
	{
		if (twodigit<10 || twodigit>99) 
		{
		cout<<"That is not a valid number." <<endl;
		}
	
		else
		{
		avg1=(twodigit%10);
		avg10=(twodigit/10);
		cout<<"The average of the digits in your number is: "<<(avg10+avg1)/2.0<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		}}}}
			
	{

	
	cout<<"#4: Three-Digit Reverse Program" <<endl;
	
	while (threedigit<100 || threedigit>999)
	{
	cout<<""<<endl;
	cout<<"Enter a three digit number: ";
	cin>>threedigit;
	
	{
		if (threedigit<100 || threedigit>999)
		{
		cout<<"That is not a valid number." <<endl;
		}
		
		else
		{
		rev100=(threedigit/100);
		rev10=((threedigit/10)%10);
		rev1=(threedigit%10);
		
		cout<<"The reverse of your number is: "<<(rev1*100)+(rev10*10)+(rev100)<<endl;
		}}}
		return 0;
	}}
