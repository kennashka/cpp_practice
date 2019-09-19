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
    
    outFile.open("Ch3_Ex5Output.dat");

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
