#include<iostream>
using namespace std;
int main()
{
int count1 = 12;
int count2 = 17;
int count3 = 71;

if ((count1 <= count2) && (count1 <= count3))
{
	if (count1 == count2)
		cout << "count1: " << count1 << "count2: " << count2 << endl;
	else if (count1 == count3)
		cout << "count1: " << count1 << "count3: " << count3 << endl;
	else
		cout << "count1: " << count1 << endl;
}
if ((count2 <= count1) && (count2 <= count3))
{
	if (count2 == count1)
		cout << "count2: " << count2 << "count1: " << count1 << endl;
	else if (count2 == count3)
		cout << "count2: " << count2 << "count3: " << count3 << endl;
	else
		cout << "count2: " << count2 << endl;

}
if ((count3 < count1) && (count3 < count2))
{
	cout << "count3: " << count3 << endl;
}
else if (count1 == count2 == count3)
	cout << "All three are equal" << endl;
return 0;
}
