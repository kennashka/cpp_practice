
//include statement(s)
#include <iostream>
#include <string>
//using namespace statement
using namespace std;
int main()
{

    //variable declaration
  const int SECRET = 11;
  const double RATE = 12.50;
    
    int num1;
    int num2;
    int newNum;
    string name;
    
    double hoursWorked;
    double wages;
    //executable statements
    cout << "Give me two numbers: " << endl;
    cin >> num1 >> num2;
   
cout << "The value of num1 = " << num1 <<"and the value of num2 = " << num2 << "." << endl;

newNum = (num1 * 2) + num2;

    cout << "The new value of newNum = " << newNum << endl;
    
    newNum = newNum + SECRET;
    
        cout << "The new value of newNum = " << newNum << endl;

        cout << "Enter a last name: " << endl;
    cin >> name;

           cout << "Enter a decimal number between 0 and 70: " << endl;
    cin >> hoursWorked; 

    wages = RATE * hoursWorked;

cout << "Name:  " << name << endl;
cout << "Pay Rate: $ " << RATE << endl;
cout << "Hours Worked: " << hoursWorked << endl;
cout << "Salary: " << wages << endl;
    //return statement
   return 0;
}
