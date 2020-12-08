#include <iostream>
#include <string>
using namespace std;
int main()
{
string string3;
string string1;
string string2;
string1 = "miniscule";
string2 = "minimum";
string3 = "miniature";
int score;
int i2;
score = 85;
i2 = 5;
bool b = !((string3.substr(8, 1) == string3.substr(8, 1))  && string1.length() == 9);
cout << b << endl;
if (score < 50)
 cout << "Failing";
if (score < 60)
 cout << "Below average";
if (score < 70)
 cout << "Average";
if (score < 80)
 cout << "Above average";
if (score < 90)
 cout << "Very good";
if (score < 100)
 cout << "Excellent";
return 0;
}

