/**     Name: Derek Salerno
	Course: CSC210 Fall 2012
	Project: Project 1
	Due Date: 8/25/2012
	Program description:  Hopefully, the program prompts the user for his/her name and greets the user with the input string and a short message.
	Instruction: Follow the prompt.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{ 		    
cout << "Derek Salerno, Project 1."  //This is me.
	<< endl;
cout << "Hello, adored user!"        //Say, "hello."   
	<< endl;
cout << "What is your full name?"    //Prompt user for name.
	<< endl;
string userInput;                    //Make room for user input string
cin >> userInput;
cout << "I'm glad to meet you, "<< userInput << "." //Print the output
	<< endl;
return 0; 				//Clean up
}

