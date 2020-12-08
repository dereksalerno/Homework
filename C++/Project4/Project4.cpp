//Name: Derek Salerno
//Course: CSC210 Fall 2012
//Project #4
//9/22/2012
//Program description: This program calculates the credit-worthiness of the user.
//Instructions:  Follow the prompt.  Use whole numbers (integers).

#include<iostream>
using namespace std;
int evaluateAge(int);			//declare global functions
int evaluateResidency(int);
int evaluateIncome(int);
int evaluateEmployment(int);
void evaluateCredit(int);

int main()
{
int creditPoints = 0;                  //Declare variables to store user input
int age;
int yearsAtAddress;
int income;
int yearsAtJob;
cout << "Welcome to JSR Credit Company!" << endl;   //The initial setup

cout << "Apply in just 4 easy steps:" << endl;

cout << "1.  What is your age?" << endl;		//Solicit user datum
cin >> age;
creditPoints = creditPoints + evaluateAge(age);		//Use global function evaluateAge(int)
							//to establish how many points are going
							//to be added to (or subtracted from)
							//creditPoints variable, which will be
							//evaluated to determine credit worthiness.

cout << "2.  How many years have you been living at your current address?" << endl;
cout << "NOTE : If less than 1 year - Enter 0" << endl;
cin >> yearsAtAddress;
creditPoints = creditPoints + evaluateResidency(yearsAtAddress);	//another "evaluate" global function

cout << "3.  What is your annual income? " << endl;
cin >> income;
creditPoints = creditPoints + evaluateIncome(income);			//same thing

cout << "4.  How many years have you been at your current job?" << endl;
cin >> yearsAtJob;
creditPoints = creditPoints + evaluateEmployment(yearsAtJob);		//Evaluating some more...

cout << "You have " << creditPoints << " points." << endl;		//Give user the total

evaluateCredit(creditPoints);		//User evaluateCredit function to determine and display result.

return 0;				//clean up our main() function.	
}


int evaluateAge(int a){			//This function accepts an int and returns
if (a <= 20)				//another int that will either add or subtract
{					//from the user's creditPoints variable in
return -10;				//the main() function.  All other global int
}					//functions in this program work the same way.
else if ((a >= 21) && (a <= 30))	//The int that is used as an argument for each
{					//is supplied by the user and is evaluated by
return 0;				//nested if-then-else statements.
}
else if ((a >= 31) && (a <= 50))
{
return 20;
}
else if (a > 50)
{
return 25;
}
}


int evaluateResidency(int r) {
if (r < 1)
{
return -5;
}
else if ((r >= 1) && (r <= 3))
{
return 5;
}
else if ((r >= 4) && (r <= 8))
{
return 12;
}
else if (r >= 9)
{
return 20;
}
}


int evaluateIncome(int i){
if (i <= 15000)
{
return 0;
}
else if ((i >= 15001) && (i <= 25000))
{
return 12;
}
else if ((i >= 25001) && (i <= 40000))
{
return 24;
}
else if (i > 40000)
{
return 30;
}
}


int evaluateEmployment(int y){
if (y < 2)
{
return -4;
}
else if ((y >= 2) && (y <= 4))
{
return 8;
}
else if (y > 4)
{
return 15;
}
}


void evaluateCredit(int cp){			//This function does the final credit
if ((cp >= -19) && (cp <= 20))			//evaluation for the user and prints
{						//the result to the console.  It is
cout << "No card issued." << endl;		//of type "void" because it does not
}						//need to return a value, only to share
else if ((cp >= 21) && (cp <= 35))		//it with the user.
{
cout << "Card issued with $500 credit limit" << endl;
}
else if ((cp >= 36) && (cp <= 60))
{
cout << "Card issued with $2000 credit limit" << endl;
}
else if ((cp >= 61) && (cp <= 90))
{
cout << "Card issued with $5000 credit limit" << endl;
}
}
