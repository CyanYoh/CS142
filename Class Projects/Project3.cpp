//**************************************************************
//Program 3--Guessing Game
//Jacob Wierman		Date: 10/9/2014
//Session 0001
//About Program: Program generates a random number and calls on
//				 the user to try and guess it. This program can
//				 be looped for as long as the user wants.
//**************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rgenerate(int rdnum)   		//This is the side-blurb where I declare my function.
{
	srand(time(NULL));				//Chen gave us this. It initializes the RNG. Just verbatum write this.
	rdnum= 1+rand()%100;   		//This is the syntax for generating a random number
	return rdnum;		    		//This returns the value for "random" to the main function.
}


int main()							//Here's the thing that actually runs. Ya know, the main program.
{
	int rdnum, userguess, answer;
	char YoN;					//This is used to keep the game looping for as long as the user wants. See the end for explanation.
	
	cout<<"****  CS142 GUESSING GAME  ****"<<endl;  //This isn't necessary, really. Think of it like a title screen.
	cout<<"****   By: Jacob Wierman   ****"<<endl;  //Just ignore it for the sake of comprehension.
	cout<<endl;
	do{		//This do-while loop alows the user to restart the game upon it's completion.
		answer=rgenerate(rdnum);  	//Calls to the above function. Used to assign value to "random".
		cout<<"Shall we play a little game?"<<endl;  	//Game introduction.
		cout<<"I'm thinking of a number between 1 and 100."<<endl;
		cout<<"Care to try and guess?"<<endl;
		do{  	//We need a do-while loop to allow the user to make incorrect guesses while being able to try again until they get it.
			cout<<endl;
			cout<<"Your guess: ";
			cin>>userguess;
			cout<<endl;
				if (userguess>answer) {  
					if ((userguess-answer)>50) { 	//Everything inclusively below this is just me being fancy. You really only need a statement for when the guess is too high, too low, or correct.
						cout<<"Woah, that's waaaaay too high."<<endl;
					}
					else if ((userguess-answer)>20) {
						cout<<"Too high, dude."<<endl;
					}
					else if ((userguess-answer)>10) {
						cout<<"Just a little too high, mate."<<endl;
					}
					else if ((userguess-answer)>5) {
						cout<<"Oh man! Just a tad high!"<<endl;
					}
					else {
						cout<<"You've pretty much got it! Just a few too high."<<endl;
					}}		//End of me being fancy.
					
				else if (userguess<answer) {
					if ((answer-userguess)>50) { 	//Again, everything inclusively below this is just me being fancy. You really only need a statement for when the guess is too high, too low, or correct.
						cout<<"Woah, that's waaaaay too low."<<endl;
					}
					else if ((answer-userguess)>20) {
						cout<<"Too low, dude."<<endl;
					}
					else if ((answer-userguess)>10) {
						cout<<"Just a little too low, mate."<<endl;
					}
					else if ((answer-userguess)>5) {
						cout<<"Oh man! Just a tad low!"<<endl;
					}
					else {
						cout<<"You've pretty much got it! Just a few too low."<<endl;
					}}		//End of me being fancy. Again.
					
				else if (userguess==answer){		//This would be the case in which the user guesses correctly.
						cout<<"Bingo! Bingo! A winner is you!"<<endl;
						cout<<endl;
					}
		}while (userguess!=answer);		//This would be the end of my inner do-while statement. It's basically saying that this blurb will loop so long as the user has entered an incorrect guess.
		
		cout<<"Want to play again? (Y/N): ";
		cin>>YoN;		//This refers to what they typed in, preferably either "Y" or "N".
		cout<<endl;
		cout<<endl;
	}while (YoN=='Y');		//This is the end of my outer do while loop. The "(YoN=='Y')" part states that the looped portion of the program will repeat if the user inputed "Yes".
	
	cout<<"Hope you had fun! Goodbye now."<<endl;		//When the game is done looping, this is the message that they'll get.
	
	return 0;		//Okay, for the time being, disociate "return 0;" and "return (variable of some sort)" in your mind. For now, "return 0;", despite it's similarity in nomenclature, is just used to end your program.
}