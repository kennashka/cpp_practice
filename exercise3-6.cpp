#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() {
    // Write your main here
    // 
 double mass;
double density;
double volume;

cout << "Enter the mass, in grams" << endl;
cin >> mass;
cout << "Enter the density, in grams" << endl;
cin >> density;

volume = mass/density;

    cout << fixed << setprecision(2) << endl;
cout << "Density is:" << volume << endl;
    return 0;
}
