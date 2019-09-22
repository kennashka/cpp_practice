
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Write your main here
    // 
    // variables
 
double netBalance, payment, averageDailyBalance, interest;
double interestRate;
int d1;
int d2;

    
cout << "Enter the balance shown in the bill: " << endl;
cin >> netBalance;

cout << "Enter the number of days in the billing cycle: " << endl;
cin >> d1;
    
cout << "Enter the payment made: " << endl;
cin >> payment;
    
cout << "Enter the number of days payment is made before billing cycle: " << endl;
cin >> d2;

cout << "Enter the interest rate per month: " << endl;
cin >> interestRate;
    
    
averageDailyBalance = ((netBalance * d1) - (payment * d2))/d1;


interest = averageDailyBalance * interestRate;

cout << fixed << setprecision(2) << endl;

cout << "Your current interest is: " << interest << endl;
    


    return 0;
}
