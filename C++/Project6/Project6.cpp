//Name: Derek Salerno
//Course: CSC 210
//Project Number 6
//Due 10/6/2012
//This program presents a menu to the user and then does a few useful
//calculations, analyzing a file full of random numbers (called random.txt)
//Instructions: Follow the menu prompt.
#include<iostream>          //imports needed
#include<fstream>
#include<string>
using namespace std;             //std namespace declared for convenience 
void ShowMenu();               //global functions are outside of main()
void CountEntries();            
void AddEmUp();
void CalcAverage();
void FindLargest();
void FindSmallest();
int main()
{
  ShowMenu();                 //all the main() function does is bring up 
  return 0;                   //the menu.  The menu will handle the rest
}


void ShowMenu()
{
    int choice;
    cout << "***************************************************" << endl;
    cout << "Number File Statistics" << endl;
    cout << "1. Display the number of entries in the file." << endl;
    cout << "2. Display the sum of all numbers in the file." << endl;
    cout << "3. Display the average of all numbers in the file." << endl;
    cout << "4. Display the largest number in the file." << endl;
    cout << "5. Display the smallest number in the file." << endl;
    cout << "6. Quit" << endl;
    cout << "Enter your choice (1 - 6) :";
    
    cin >> choice;
  
    switch(choice)            //This switch statement takes the user input and
  {                           //runs another function based on which choice is
    case 1 : CountEntries();  //made.  
      break;
    case 2 : AddEmUp();
      break;
    case 3 : CalcAverage();
      break;
    case 4 : FindLargest();
      break;
    case 5 : FindSmallest();
      break;
    case 6 : break;
    default : cout << "\n\nPlease enter a valid number.\n\n";
      ShowMenu();              //If invalid input occurs, the menu is brought 
  }                            //back up with a message.
}


void CountEntries()            //This function increments the count variable
{                              //every time the ifstream encounters another
    ifstream source;           //number and prints it.
    int count;
    float val;
    source.open("random.txt");
      while(source >> val)
      {
        count++;
      }
    cout << "There are " << count << " numbers in the file" << endl;
}


void AddEmUp()                  //This function adds the numbers up by
{                               //adding each number the ifstream encounters
    ifstream source;            //to a variable names "total" and prints it.
    int total;
    float val;
    source.open("random.txt");
      while(source >> val)
      {
        total += val;
      }
    cout << "The sum of all numbers is: " << total << "." << endl;
}


void CalcAverage()
{                                     //This function calculates an average
    ifstream source;                  //by finding the sum and count as in
    float total;                      //previous functions, and then it 
    float val;                        //divides the sum by the count and 
    int count;                        //prints the result.
    source.open("random.txt");
      while(source >> val)
      {
        total += val;
        count++;
      }
    cout << "The average of all numbers in the file is " << total/count << "." << endl;
}


void FindLargest()                     //This function finds the largest number
{                                      //by getting a priming read of the first
    ifstream source;                   //number and comparing it to every
    float highest;                     //number that follows to see if it
    float val;                         //is larger.  If it is, it is placed 
    source.open("random.txt");         //into the "highest" variable, and
    source >> highest;                 //replaces the variable that did 
      while(source >> val)             //occupy it.  It is then printed.
      {
        if(val > highest)
        {
          highest = val;
        }
      }
    cout << "The highest number in the file is "<< highest << "." << endl;
}      


void FindSmallest()              //This function works much the same was
{                                //as FindLargest() but, well, finds
    ifstream source;             //the smallest instead.
    float lowest;
    float val;
    source.open("random.txt");
    source >> lowest;
      while(source >> val)
      {
        if(val < lowest)
        {
          lowest = val;
        }
      }
    cout << "The lowest number in the file is " << lowest << "." << endl;
}      
