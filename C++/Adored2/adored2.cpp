//      Name: Derek Salerno
//      Course: CSC210 Fall 2012
//	Project: Project 2
//	Due Date: 9/1/2012
//	Program description:  Hopefully, the program prompts the user for
//      his/her full name and greets the user with the input string and a short message.
//      Note: program will not funtion properly if user presents more than two names.
//	Instruction: Follow the prompt.


#include <iostream>
#include <string>
using namespace std;

int main()
{ 		    
cout << "Derek Salerno, Project 2." 		 //This is me.
	<< endl;
cout << "Hello, adored user!"	       	         //Say, "hello."   
	<< endl;
cout << "What is your full name?"   		 //Prompt user for name.
	<< endl;
string userInput; 		                 //Make room for user input string
getline(cin, userInput);	                 //Make sure we get the whole string this time.
int spacePlace = userInput.find(" ");		 //Finding out where the first name stops and the last name starts.
int totalChars = userInput.length(); 		 //Finding out how long the total string is.
string firstName = userInput.substr(0, spacePlace);		//Getting the first name by making a substring that goes to the space.
string lastName = userInput.substr((spacePlace +1), (totalChars - spacePlace));		//Last name is from space to the end.
											//We find out how long the substring is to be
											//by subtracting the index of the space from
											//the total (totalChars).
cout << "I'm glad to meet you, " << userInput << "." << endl;     //Extend a formal greeting.
cout << "Your first name is " << firstName << "." //Print the first name.
	<< endl;
cout << "Your last name is " << lastName << "." //Print the last name.
	<< endl;
cout << "Your name has " << (totalChars-1) << " characters." //Print the total number of characters, minus one for the space.
	<< endl;
return 0; 				//Clean up
}

