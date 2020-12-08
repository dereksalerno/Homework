#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float area = -16;
float root;
if (area < 0){
	area = fabs(area);
	root = sqrt(area);
	cout << root << endl;
}
else {
	root = sqrt(area);
	cout << root << endl;
}
return 0;
}
