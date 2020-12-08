#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float money = 112.4912;
	cout << "$" << setw(6)  <<setprecision(5) << money << endl;
	cout << "$" << setw(7) << setprecision(5) << money << endl;
	cout << "$" << setw(8) << setprecision(5) << money << endl;
	cout << "$" << setw(9) << setprecision(5) << money << endl;
	cout << "$" << setw(10) << setprecision(5) << money << endl;
	cout << "$" << setw(11) << setprecision(5) << money << endl;
	cout << "$" << setw(12) << setprecision(5) << money << endl;
	cout << "$" << setw(13) << setprecision(5) << money << endl;
	
	return 0;
}
