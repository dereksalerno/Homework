#include <iostream>
using namespace std;
void Twist(int, int&);
int main(){
int r = 1;
int s = 2;
int t = 3;
    Twist(t,s);
    cout << r << ' ' << s << ' ' << t << endl;

}
void Twist(int a, int& b){
int c;
c = a + 2;
a = a * 3;
b = c + a;
}
