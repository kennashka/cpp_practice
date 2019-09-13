#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{

double height;
double radius;
const double PI = 3.14159;

cout << "Enter the height of the cylinder: ";
cin >> height;
cout << "Enter the radius of the base of the cylinder: ";
cout << endl;
    
cin >> radius;
cout << endl;

cout << fixed << showpoint << setprecision(2);

cout << "Volume of the cylinder = "<< PI * pow(radius, 2.0) * height << endl;

cout << "Surface area: "<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)<< endl;

    
return 0;
    
}
