// Code seems correct but does not pass a couple test cases.

// Needs to be optimized


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;


int main() {
    // declare variables
 
    string firstName;
    string lastName;
    double updatedSalary;
    string file;
    double payIncreasePercentage;
    double payIncrease;
    
    // file variables
  
    ifstream inFile;
    ofstream outFile;
 
    cout << "Enter File Location: " << endl;
    cin >> file;
        
    inFile.open(file);
    
    outFile.open("outData.txt");

    inFile >> lastName >> firstName >> updatedSalary >> payIncreasePercentage;
    payIncreasePercentage *= .01;
    payIncrease = payIncreasePercentage * updatedSalary;
    updatedSalary += payIncrease;
    
    outFile << firstName <<" "<< lastName <<" " << fixed << setprecision(2) << updatedSalary <<endl;

       inFile >> lastName >> firstName >> updatedSalary >> payIncreasePercentage;
    payIncreasePercentage *= .01;
    payIncrease = payIncreasePercentage * updatedSalary;
    updatedSalary += payIncrease;
    
    outFile << firstName << " " << lastName <<" " << fixed << setprecision(2) << updatedSalary << endl;

inFile >> lastName >> firstName >> updatedSalary >> payIncreasePercentage;
payIncreasePercentage *= .01;
payIncrease = payIncreasePercentage * updatedSalary;
updatedSalary += payIncrease;
    
outFile << fixed << setprecision(2);
outFile << firstName <<" "<< lastName <<" "<< updatedSalary << endl;

    inFile.close();
    outFile.close();
    
    // Write your main here
    return 0;
}



/* Ch3_Ex5Data.txt File

Miller Andrew 65789.87 5
Green Sheila 75892.56 6
Sethi Amit 74900.50 6.1


*/
