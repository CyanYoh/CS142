//***************************************************************
//Program--Grade Calculator
//Author--Mikeal Walker
//September 10th 2014
//Session--01
//The purpose of this program is to calculate a students grade throughout
//the course of the year. They will be able to calculate their grade 
//at any given time by inputing the number of points they have achieved 
//on certain assignments throughout the year.
//***************************************************************

#include <iostream>
#include <iomanip>
using namespace std;
int mainmenu()
{
	cout<<"Please select a section by entering the number listed before that section"<<endl;
	cout<<"1) Homework or Quiz (10pts/each)"<<endl;
	cout<<"2) Exam (50pts/each)"<<endl;
	cout<<"3) Final Exam (100pts)"<<endl;
	cout<<"4) Show Grade"<<endl;
	cout<<"5) Exit"<<endl;	
}

void hq_function (int &hq_score, int &num_hq)
{
int a;
	cout<<"Enter the number of homework and quizzes you've had."<<endl;
	cin>>num_hq;
	
	hq_score=0;
	for (int i=0; i<num_hq; i++){
		do{
			cout<<"Enter the grade you got on homework or quiz #"<<i+1<<"."<<endl;
			cin>>a;
			if (a>10 || a<0){
				cout<<"This value isn't allowed. Please input a value between 0 and 10."<<endl;
			}
		}while (a>10 || a<0);
		hq_score=hq_score+a;
	}
	
}

void exam_function (int &exam, int &num_exam)
{
int b;
	cout<<"Enter the number of exams you've had."<<endl;
	cin>>num_exam;
	
	exam=0;
	for (int i2=0; i2<num_exam; i2++){
		do{
			cout<<"Enter the grade you got on exam #"<<i2+1<<"."<<endl;
			cin>>b;
			if (b>50 || b<0){
				cout<<"This value isn't allowed. Please input a value between 0 and 50."<<endl;
			}
		}while (b>50 || b<0);
		exam=exam+b;
	}
}

void final_exam (int &fin_exam)
{
int c;
	fin_exam=0;
	do{
		cout<<"Enter the grade you got on your final."<<endl;
		cin>>c;
		if (c>100 || c<0){
			cout<<"This value isn't allowed. Please input a value between 0 and 100."<<endl;
		}
	}while (c>100 || c<0);
	fin_exam=fin_exam+c;
}

int main()
{
	int menu, menu_input, num_hq, exam, hq_score, i, num_exam, fin_exam;
	double overall;
	char name[30], answer;
	
	do{
	cout<<"Enter your name to begin."<<endl;
	cin>>name;
	
	cout<<"Hello "<<name<<"!"<<endl;
	hq_score=0;
	exam=0;
	fin_exam=0;
	menu=mainmenu();
	do{
		cin>>menu_input;
		if (menu_input==1){
			hq_function (hq_score, num_hq);
				cout<<"Total number of points you input is "<<hq_score<<"."<<endl;
				cout<<setprecision (4)<<(hq_score/(num_hq*10.0))*100<<"% on Homework and Quizzes."<<endl;
			}			
		else if(menu_input==2){
			exam_function (exam, num_exam);
				cout<<"Total number of points you input is "<<exam<<"."<<endl;
				cout<<setprecision (4)<<(exam*2/num_exam)<<"% on Exams"<<endl;
			}
		else if(menu_input==3){
			final_exam (fin_exam);
			cout<<setprecision (4)<<(fin_exam*1.0)<<"% on your Final"<<endl;
		}
		else if(menu_input==4){
		overall=((hq_score+exam+fin_exam)*100)/((num_hq*10.0)+(num_exam*50.0)+(fin_exam));
		cout<<"Your current grade is " <<setprecision (4)<<overall<<"%."<<endl;
		}
		else if(menu_input==5){
		break;
		}
		else {
		cout<<"Please imput a valid section number"<<endl;
		}
		mainmenu();
	}while (menu_input!=5);
	cout<<"Do you want compute another grade? (y=yes, n=no)"<<endl;
	cin>>answer;
	}while (answer='y');
	return 0;
}