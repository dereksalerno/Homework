#include <iostream>
using namespace std;

int main()
{
int hours;
int minutes = 45;
    for(hours = 7; hours <= 10; hours++) {
        for(minutes; minutes < 60; minutes++){
        if(minutes < 10)
            cout << hours << ":0" << minutes << endl;
        else
            cout << hours << ":" << minutes << endl;
        if((hours ==10) && (minutes == 0))
            break;
        }
    minutes = 0;
}
return 0;
}

