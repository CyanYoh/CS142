//**************************************************************
//Program 5--Candy Database
//Jacob Wierman		Date: 11/12/2014
//Session 0001
//About Program: Program serves as a database in which
//				 the user can add or subtract from a count
//				 of different candies.
//**************************************************************

#include <iostream>
#include <ctime>
using namespace std;
void menuscreen();
void eat(int a[]);
void find(int a[]);
void inventory(int a[]);
void candytypes();
void commandmenu();

int main()
{
char c;
int a[7], eatpos, findpos;
	for (int i=0; i<7; i++){
		a[i]=0;}
	
cout<<"***WELCOME TO THE CANDY DATABASE PROGRAM!***"<<endl;

	cout<<""<<endl;
	cout<<"You are currently at the Main Menu."<<endl;
	cout<<"Enter a command to continue."<<endl;
	cout<<""<<endl;
	cout<<"E - Eat a piece of candy."<<endl;
	cout<<"F - Find a piece of candy."<<endl;
	cout<<"I - Inventory."<<endl;
	cout<<"C - Candy Types list."<<endl;
	cout<<"M - Show Command Menu."<<endl;
	cout<<"Q - Quit."<<endl;
	cout<<""<<endl;
	cout<<"Go to: ";
	cin>>c;
	cout<<"";
do{
	if (c=='E'){eat(a);
	}
	else if (c=='F'){find(a);
	}
	else if (c=='I'){inventory(a);
	}
	else if (c=='C'){candytypes();
	}
	else if (c=='M'){commandmenu();
	}
	menuscreen();
	cin>>c;
	cout<<""<<endl;
}while (c!='Q');



return 0;
}
void menuscreen(){
	cout<<"You are currently at the Main Menu."<<endl;
	cout<<"Enter a command to continue."<<endl;
	cout<<""<<endl;
	cout<<"E - Eat a piece of candy."<<endl;
	cout<<"F - Find a piece of candy."<<endl;
	cout<<"I - Inventory."<<endl;
	cout<<"C - Candy Types list."<<endl;
	cout<<"M - Show Command Menu."<<endl;
	cout<<"Q - Quit."<<endl;
	cout<<""<<endl;
	cout<<"Go to: ";
}
void eat(int a[]){
	int eatpos;
	cout<<"Enter the value (1-6) of the candy you wish to eat."<<endl;
	cout<<"User input: ";
	cin>>eatpos;
	if (a[eatpos]>0){
		a[eatpos]=(a[eatpos]-1);
	}
	else{
		cout<<"You have no candies of this type."<<endl;
		cout<<""<<endl;
	}
	cout<<""<<endl;
}
void find(int a[]){
	int findpos;
	cout<<"Enter the value (1-6) of the candy you wish to eat."<<endl;
	cout<<"User input: ";
	cin>>findpos;
	a[findpos]=(a[findpos]+1);
	cout<<""<<endl;
}
void inventory(int a[]){
	cout<<"Chocolate Eggs: "<<a[1]<<endl;
	cout<<"Peeps: "<<a[2]<<endl;
	cout<<"Snickers: "<<a[3]<<endl;
	cout<<"Reese's Cups: "<<a[4]<<endl;
	cout<<"M&M's: "<<a[5]<<endl;
	cout<<"Other: "<<a[6]<<endl;
	cout<<""<<endl;
}
void candytypes(){
	cout<<"1) Chocolate Eggs"<<endl;
	cout<<"2) Marshmallow Chicks"<<endl;
	cout<<"3) Snickers Bars"<<endl;
	cout<<"4) Reese's Cups"<<endl;
	cout<<"5) M&M's"<<endl;
	cout<<"6) Other Candies"<<endl;
	cout<<""<<endl;
}
void commandmenu(){
	cout<<"E - Eat a piece of candy."<<endl;
	cout<<"F - Find a piece of candy."<<endl;
	cout<<"I - Inventory."<<endl;
	cout<<"C - Candy Types list."<<endl;
	cout<<"M - Show Command Menu."<<endl;
	cout<<"Q - Quit."<<endl;
	cout<<""<<endl;
}
	

	


