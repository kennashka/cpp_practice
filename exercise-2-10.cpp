
#include <iostream>
# include <ctgmath>

using namespace std;

int main() {
        double deci1;
        double deci2;
        double deci3;
        double deci4;
        double deci5;
        double convert;

 
cout << "Enter first decimal number: " << endl;
cin >> deci1;
    
cout << "Enter second decimal number: " << endl;
cin >> deci2;
    
cout << "Enter third decimal number: " << endl;
cin >> deci3;
    
cout << "Enter fourth decimal number: " << endl;
cin >> deci4;
    
cout << "Enter fifth decimal number: " << endl;
cin >> deci5;
    
convert = deci1 + deci2 + deci3 + deci4 + deci5;
    
cout << "Sum of all decimals converted to the nearest integer: " << llround(convert) << endl;  
    
    return 0;
}
