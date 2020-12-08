//Derek Salerno
//CSC210
//Fall, 2012
//Project #7
//Description:  This program takes a text file (called 'exams.dat' and first gets the key,
//which is the first thing printed in the file, and then compares that key with exam answers
//organized by student number.  It then prints the student number and the score achieved on
//a second file, 'scores.dat', with a little bit or error handling.
#include<iostream>
#include<fstream>                     //necessary preprocessor directives
#include<string>
using namespace std;
void PrintHeading();         //Declaring our prototypes
void GradeStuff();
int CompareToKey(string,string);
bool HasValidAnswers(string);
int main()
{
PrintHeading();             //We have very little in our main method.  We are just
GradeStuff();               //calling our defined functions
}

void PrintHeading()

{
cout << "Derek Salerno \nProject #7\nCSC210\nFall, 2012\n";    //This is me, and my info.
}

void GradeStuff()
{
ifstream inData("exams.dat");                           //We open our input and output streams by opening
ofstream outData("scores.dat");                         //our input and output files.
string test;
string key;
int studentID;
if (!inData)                          //Let's make sure we have something to work with.
  {
     cout << "File 'exams.dat' seems to be missing or corrupted." << endl;     
     return;
  }
else 
  {
     getline(inData, key);                        //We get priming reads to get the key, and then the first 
     inData >> studentID;                         //student ID and first answers stored in out variables.
     inData >> test;
     while(inData){
     	if (!HasValidAnswers(test))               //If any character over 'f' is present, this Boolean will be false,
	      {                                   //And we will warn the user of invalid answers.
	      outData << studentID << " Invalid answers\n";
	      }
	else if (test.length() < key.length())              //We use the .length() function of the string class to determine if enough
              {                                             //answers are given and we send the appropriate error message to the file
              outData << studentID << " Too few answers\n";
	      }
	else if (test.length() > key.length())
	      {
              outData << studentID << " Too many answers\n";
	      }
	else 
	      {
	      outData << studentID << " " << CompareToKey(key, test) << "\n";  //If there are no obvious errors, we will compare the 
	      }                                                                //answers to the key and print the total of correct answers 
       inData >> studentID;                                                    //to the file
       inData >> test;
		
     }
     
  }

    inData.close();                               //close up our streams.
    outData.close();
}

int CompareToKey(string key, string answers)                  //CompareToKey() iterates through two strings and compares each
{                                                             //individual 1-char substring.
        int grade = key.length();
	for (int i = 0; i < key.length(); i++)
	{
		if (key.substr(i, 1) != answers.substr(i, 1))
	         {grade--;}
	}	
	return grade;
}

bool HasValidAnswers(string str)                        //This boolean iterates through a string to make sure that each char is
{                                                       //within our required field 
    bool checkIt;
       	for (int i = 0; i < str.length(); i++)
         if (str.substr(i, 1) > "f")
	 {checkIt = false;}
	 else 
	 {checkIt = true;}
    return checkIt;	
}
