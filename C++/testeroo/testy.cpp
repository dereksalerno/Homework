#include<iostream>
#include<string>
using namespace std;
int main()
{

int streetNum;
string street1;
string street2;
string town;
string state;
int zip;
cout << "Enter that shit for the test, bro" << endl;
cin >> streetNum;
cin >> street1;
cin >> street2;
//cin.ignore(100, '\n');
cin >> town;
//cin.ignore(100, ',');
cin >> state;
cin >> zip;
cout << streetNum << " " << street1 << " " << street2 << endl;
cout << town << ", " << state << " " << zip << endl;
return 0;
}
