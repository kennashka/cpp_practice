
#include <iostream>
using namespace std;

int main()
{
double radius;
double area;

const double PI = 3.14;
double circumference;
     
cout << "Enter the radius: ";
cin >> radius;
cout << endl;
    
circumference = 2 * PI * radius;
area = PI * radius * radius;
    
cout << "Area = " << area << endl;

cout << "Circumference = " << circumference << endl;
