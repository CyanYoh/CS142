//Program 7--Student Record
//Jacob Wierman		Date: 12/3/2014
//**************************************************************
//Session 0001
//About Program: Program allows for storage of students'
//				 scholastic information. There's something about
//				 a change in format, so I guess I'll do that too.
//**************************************************************

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
	char firstname[20], lastname[20], id[10], credits[5], earned[5], points[5];
	char str1[20], str2[20], str3[10], str4[5], str5[5], str6[5];
	
	cout<<"Enter student's first name:  "<<endl;
	cin.getline(firstname, 20);
	cout<<endl;
	cout<<"Enter student's last name:  "<<endl;
	cin.getline(lastname, 20);
	cout<<endl;
	cout<<"Enter student ID:  "<<endl;
	cin.getline(id, 10);
	cout<<endl;
	cout<<"Enter current number of credits:  "<<endl;
	cin.getline(credits, 5);
	cout<<endl;
	cout<<"Enter the expected number of credits:  "<<endl;
	cin.getline(earned, 5);
	cout<<endl;
	cout<<"Total number of points:  "<<endl;
	cin.getline(points, 5);
	cout<<endl;
	
	ofstream outfile("studentlabel.txt");
	outfile<<firstname<<" "<<lastname<<" "<<id<<" "<<credits<<" "<<earned<<" "<<points<<endl;
	outfile.close();

	ifstream infile("studentlabel.txt");
	infile>>str1>>str2>>str3>>str4>>str5>>str6;
	cout<<"First Name: "<<str1<<"   Last Name: "<<str2<<"   ID: "<<str3<<endl;
	cout<<"Current Credits: "<<str4<<"   Expected Credits: "<<str5<<"   Total Points: "<<str6<<endl;
	infile.close();
	
	return 0;
}
	