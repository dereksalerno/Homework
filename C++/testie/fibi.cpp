#include<iostream>
using namespace std;

int main(){
int fibi1 = 1;
int fibi2 = 1;
while(fibi1 < 30000 || fibi2 < 30000)
{
    if (fibi1 < 30000)
        cout << fibi1 << endl;
fibi1 = fibi1 + fibi2;
    if (fibi2 < 30000)  
        cout << fibi2 << endl;
fibi2 = fibi2 + fibi1;
}
return 0;
}
