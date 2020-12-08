#include<iostream>
using namespace std;
int main()
{
int a = 1;
int b = 1;
int total = 0;
while ((a < 4000000) || (b < 4000000))
   {
    if(a < 4000000)
        cout << a << endl;
    //a += b;
      if(a % 2 == 0)
          total +=a ;
          cout << "total here: " << total << endl; 
    a+=b;
    if(b < 4000000)
        cout << b << endl;
      if(b % 2 == 0)
         total += b;
         cout << "total here: " << total << endl;
    b+=a;
}
cout << "sum: " << total << endl;
return 0;
}
