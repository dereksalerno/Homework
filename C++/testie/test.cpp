#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
 ifstream inData;
 inData.open("myData.dat");
int sum = 0;
int count,  number;
while(inData){
 count = 1;
 while(count <= 5 && inData){
 inData >> number;
 sum = sum + number;
 count++;
 
 if (count == 5){
 cout << (sum / count) << endl;
}
}
}
return 0;
}
