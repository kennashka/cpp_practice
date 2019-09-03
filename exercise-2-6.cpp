
//include statement(s)

//using namespace statement
#include <iostream>
#include <string>
using namespace std;

int main()
{
//variable declaration

    string name;
    double studyHours;

//executable statements
cout << "Enter your name: " << endl;  
cin >> name;

cout << "Enter your study hours: " << endl;  
cin >> studyHours;

    cout << "Hello, " << name <<"! On Saturday, you need to study " << studyHours <<" hours for the exam." << endl;

//return statement

    return 0;
}
