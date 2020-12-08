#include <iostream>
using namespace std;
int main()
{
int total = 0;
int num = 1;
while (num < 1000)
{
    if ((num % 3 == 0) || (num % 5 ==0)) 
    {
	total += num;
    }
num++;
}
cout << total;
return 0;
}
