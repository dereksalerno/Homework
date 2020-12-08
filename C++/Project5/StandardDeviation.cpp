//Name: Derek Salerno
//Course: CSC210 Fall 2012
//Project #5
//Due 29 Sept, 2012
//Description: Program calculates the mean and standard deviation of a series of values
//that are on a locally stored file names "scores.dat".  It then prints them to the console.
//Instructions: Run the program, making sure that "scores.dat" is in the same folder.
#include<iostream>                   //declare needed preprocessor directives
#include<fstream>
#include<iomanip>
#include<cmath>
using namespace std;
float calcSD(int,float,float);           //Declaring global float functions that do our calculations.
float calcMean(float,int);
int main()
{
  int valCount = 0;                        //declaring our variables
  ifstream inData;
  float val;
  float standardDeviation;
  float mean;
  float sum = 0;
  float valSquaredSum = 0;
  inData.open("scores.dat");          //Opening our file.

  if( !inData )                       //Handling a likely error: a missing, empty, corrupted or read-protected file.
{
    cout << "Can't open input file" << endl;
    return 1;
}

  while( inData >> val )         //Starting our val loop and already collecting data. Simply using "while(inData)" would read the  
    {                            //last line twice, due to the loop being executed one last time before it gets to the end of file. 
        sum += val;      //Getting a sum of all values for both the mean and SD calculations.       
	valSquaredSum += (val * val);   //Getting a summation of each value squared, which is necessary for our Standard Deviation formula.
        valCount++;		//This is how we count our values.  The count goes up every time the loop collects a datum.
    }
  
  mean = calcMean(sum, valCount);                                     //Using our functions to do the math
  standardDeviation = calcSD(valCount, valSquaredSum, sum);   
  cout << "Mean: " << fixed << setprecision(1) << mean << endl;       //Printing stuff.
  cout << "Standard Deviation: " << standardDeviation << endl;
  inData.close();               //Close the file.

  return 0;              //Close up shop and assure the user we had no errors.
}
  float calcSD(int count, float totalSquared, float total)               //A somewhat-complicated Standard Deviation calculating function
{
  return sqrt( ((count * totalSquared)-(total*total)) / (count * (count - 1)) ); 
}
float calcMean(float total, int count)                  //A simple mean-calculating function.
{
  return total/count;
}
