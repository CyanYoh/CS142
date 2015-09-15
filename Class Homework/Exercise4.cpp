//****************************************************************
//Exercise 4: #4
//Name: Jacob Wierman		Date:10/10/14
//Session 0002
//Description: #4- Determines if an integer is odd or even. If the
//				   number (n) is even, computes the sum from values
//				   1 to n.
//****************************************************************
#include <iostream>
using namespace std;
int sumeven(int n)
{
int total, i;
total=0;

for (i=1; i<=n; i++)
{
	total=total+i;
}
return total;
}
int main()
{
int n, total;
char response;
do {
	cout<<"Please enter an integer. If the integer is even,"<<endl;
	cout<<"the program will take the sum of all integers from"<<endl;
	cout<<"1 to the specified integer. If the integer is odd,"<<endl;
	cout<<"the program will return zero."<<endl;
	cout<<endl;
	cout<<"Integer: ";
	cin>>n;
if (n%2==0){
	cout<<'0'<<endl;
	cout<<"Seems that your number is even."<<endl;
	cout<<"The summation of all the integers"<<endl;
	cout<<"from 1 to your number is: "<<sumeven(n)<<"."<<endl;
	}
else if (n%2==1){
	cout<<"1"<<endl;
	cout<<"Your number is odd."<<endl;
	}
else {
	cout<<"Invalid entrant."<<endl;
}
	cout<<"Enter another number? (Y/N)"<<endl;
	cin>>response;
}while (response=='Y');
cout<<"End of program."<<endl;
return 0;
}