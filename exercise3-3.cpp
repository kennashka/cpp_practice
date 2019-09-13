#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
 
    double kg;
    double pound = 2.2;
    double convert;
    
    
    cout << "Enter the weight of a person in kilograms and hit enter: " << endl;
    cin >> kg;
    convert = kg * pound;
    
      cout << "Weight of a person in kilograms converted to pounds: " << fixed << setprecision(2) << convert << endl;
    
    return 0;
}
