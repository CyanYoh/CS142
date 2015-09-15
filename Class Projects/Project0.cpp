 //*********************************************************
// Program 0--The Welcome Program
// Author: Jacob Wierman
//Date: 8/29/2014
//Session 0000
//This program asks the user his or her name, greets them by name, and
//welcomes them to CS142, the best course ever.
//
//***********************************************************
#include <iostream>
using namespace std; 
int main()
{
   char name[30];
  
   cout<<"What is your name?  ";
   cin>> name;
   cout<<"Hello "<<name<<". "<<endl;
   cout<<"Welcome to CS142!!!"<<endl;
   cout<<"This may be confusing at first,"<<endl;
   cout<<"but keep at it!"<<endl;
   cout<<"You can do it "<<name<<"!" <<endl;
   cout<<"Best of luck."<<endl;

  return 0;
}
