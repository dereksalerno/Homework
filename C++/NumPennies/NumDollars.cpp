#include<iostream>
using namespace std;
int AddEmUp(int,int,int,int,int);
float toDollars(int);
int main()
{
	int pennies = 17;
	int nickels = 22;
	int dimes = 11;
	int quarters = 3;
	int dollars = 2;
	int totalAmount;
	totalAmount = AddEmUp(pennies, nickels, dimes, quarters, dollars);
	cout << "You have: " << totalAmount << " pennies worth of money." << endl;
	cout << "In case that was confusing, that is $" << toDollars(totalAmount) << "." << endl;
return 0;
}
int AddEmUp(int pen, int nic, int dim, int qua, int dol)
{
	return (pen + (nic*5) + (dim*10) + (qua*25) + (dol*100));
}
float toDollars(int numPennies)
{
	return (float(numPennies/100.0));
}
