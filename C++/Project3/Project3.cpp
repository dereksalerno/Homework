//********************************************************
//Name:Derek Salerno
//CSC 210 Fall 2012
//Project #3
//Due: 9/8/2012
//Description:This program calculates the final grade for a CSC 210
//class, but could be easily modified to calculate the 
//grade for other classes.
//Instructions: Enter the requested two numbers for each
//question with a space inbetween.  Press ENTER.
//********************************************************

#include <iostream>                                 //Make the preprocessor directives
#include <iomanip>
using namespace std;
float Percent(float,float);				    //Declare the functions used
float Final(float,float,float,float,float,float);
int main()
{
float hWPoints;					    //Make space for some user input by declaring variables
float hWPoss;
float test1;
float test1Poss;
float test2;
float test2Poss;
float test3;
float test3Poss;
float proj;
float projPoss;
float exam;
float examPoss;
cout << "Derek Salerno - Project #3" << endl;		//That's me.
cout << "For Homework, enter the points earned and the total points possible: " << endl;  //Through this section, we solicit input from the user
cin >> hWPoints >> hWPoss;								  //so that we can crunch the numbers
cout << "For Test 1, enter the total points earned and the points possible: " << endl;    
cin >> test1 >> test1Poss;
cout << "For Test 2, enter the total points earned and the points possible: " << endl;
cin >> test2 >> test2Poss;
cout << "For Test 3, enter the total points earned and the points possible: " << endl;
cin >> test3 >> test3Poss;
cout << "For Programing Projects, enter the total points earned and the total points possible: " << endl;
cin >> proj >> projPoss;
cout << "For the Final Exam, enter the total points earned and the points possible: " << endl;
cin >> exam >> examPoss;
float hWPercent = Percent(hWPoints, hWPoss);			//Here, we find the individual grade averages from 
float test1Percent = Percent(test1, test1Poss);			//each grading criterion by using the function
float test2Percent = Percent(test2, test2Poss);			//"Avg", which returns a float.
float test3Percent = Percent(test3, test3Poss);
float projectPercent = Percent(proj, projPoss);
float examPercent = Percent(exam, examPoss);
float finalGrade = Final(hWPercent,test1Percent,test2Percent,test3Percent,projectPercent,examPercent);  //Here, we use the "final" function to
cout << "The final grade is " << fixed << setprecision(1) << finalGrade << "%." << endl;                //calculate the grade.  Then we display 
return 0;												//it, setting decimal precision to 1.
}													

float Percent(float i, float j)		//The Percent function, which calculates a percentage value.
{
return (i/j)*100;
}
float Final(float hw, float t1, float t2, float t3, float p, float fe)        //The Final funtion, which calculates an average
{									      //when given 6 values with different weight toward
const float HOMEWORK_WEIGHT = .1;					      //the final average.  Constants are used so that the
const float TEST1_WEIGHT = .1;						      //program can be modified easily.
const float TEST2_WEIGHT = .1;
const float TEST3_WEIGHT = .1;
const float PROJECT_WEIGHT = .35;
const float EXAM_WEIGHT = .25;
return ((HOMEWORK_WEIGHT*hw)+(TEST1_WEIGHT*t1)+(TEST2_WEIGHT*t2)+(TEST3_WEIGHT*t3)+(PROJECT_WEIGHT*p)+(EXAM_WEIGHT*fe));
}

