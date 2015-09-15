//**************************************************************
//Program 4--Compute Your Grade
//Jacob Wierman		Date: 10/27/2014
//Session 0002
//About Program: Program uses user-input of class grading
//				 parameters and theie own scores to compute
//				 their grade. These paramenters are laid out
//				 in the assignment.
//				 This version does not have a letter grade
//				 output feature.
//**************************************************************

#include <iostream>
#include <iomanip>
using namespace std;
int homescreen()   //This is the main menu of navigation.
{
	cout<<"Navigate to your desired section by inputting its number."<<endl;
	cout<<"1) Homework/Quiz (10pts/each)"<<endl;
	cout<<"2) Exam (50pts/each)"<<endl;
	cout<<"3) Final Exam (100pts)"<<endl;
	cout<<"4) Show Grade"<<endl;
	cout<<"5) Exit"<<endl;	
}

void hwq (int &hwqpoints, int &hwqnumber)    //This is the subroutine that calculates the grade for the homework and quiz category.
{
int a;
	cout<<"Enter the number of homework and quizzes you've had."<<endl;
	cin>>hwqnumber;
	
	hwqpoints=0;
	for (int i=0; i<hwqnumber; i++){
		do{
			cout<<"Your grade on HW/Quiz #"<<i+1<<":"<<endl;
			cin>>a;
			if (a>10 || a<0){
				cout<<"Incorrect value. Please enter a value between 0 and 10."<<endl;
			}
		}while (a>10 || a<0);
		hwqpoints=hwqpoints+a;
	}
	
}

void exm (int &exmpoints, int &exmnumber)    //This is the subroutine that calculates the grade for the exam category.
{
int b;
	cout<<"Enter the number of exams you've had."<<endl;
	cin>>exmnumber;
	
	exmpoints=0;
	for (int i2=0; i2<exmnumber; i2++){
		do{
			cout<<"Your grade on Exam #"<<i2+1<<":"<<endl;
			cin>>b;
			if (b>50 || b<0){
				cout<<"Incorrect value. Please enter a value between 0 and 50."<<endl;
			}
		}while (b>50 || b<0);
		exmpoints=exmpoints+b;
	}
}

void finalexm (int &finalexmpoints)    //This is the subroutine that calculates the grade for the exam category.
{
int c;
	finalexmpoints=0;
	do{
		cout<<"Your grade on the final:"<<endl;
		cin>>c;
		if (c>100 || c<0){
			cout<<"Incorrect value. Please enter a value between 0 and 100."<<endl;
		}
	}while (c>100 || c<0);
	finalexmpoints=finalexmpoints+c;
}

int main()    //This is the main program that links to all the sub-routines.
{
	int menu, menu_input, hwqnumber, exmpoints, hwqpoints, i, exmnumber, finalexmpoints;
	double totalgrade;
	char userresponse;
	
	do{
	hwqpoints=0;
	exmpoints=0;
	finalexmpoints=0;
	menu=homescreen();
	do{    //Allows the user to compute grades multiple times.
		cin>>menu_input;
		if (menu_input==1){    //Links to HW/Quizzes category.
			hwq (hwqpoints, hwqnumber);
				cout<<"Your total number of points in this category is: "<<hwqpoints<<"."<<endl;
				cout<<"You have a "<<(hwqpoints/(hwqnumber*10.0))*100<<"% in the HW/Quizzes category."<<endl;
			}			
		else if(menu_input==2){    //Links to Exams category.
			exm (exmpoints, exmnumber);
				cout<<"Your total number of points in this category is: "<<exmpoints<<"."<<endl;
				cout<<"You have a "<<(exmpoints*2/exmnumber)<<"% in the Exams category."<<endl;
			}

		else if(menu_input==4){    //Links to show total grade category.
		totalgrade=((hwqpoints+exmpoints+finalexmpoints)*100)/((hwqnumber*10.0)+(exmnumber*50.0)+(finalexmpoints));
		cout<<"Currently, your grade stands at a " <<totalgrade<<"%."<<endl;    //Computes letter grade. I do not understand why you have broken down your letter grades like this. Nevertheless, they are as you listed them.
			
		}
		else if(menu_input==5){
		break;
		}
		else {
		cout<<"That is not a valid selection. Please try again."<<endl;
		}
		homescreen();
	}while (menu_input!=5);
	cout<<"Would you like to compute another grade? (y=Yes, n=No)"<<endl;
	cin>>userresponse;
	}while (userresponse='y');
	return 0;
}