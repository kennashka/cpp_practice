
#include <iostream>
#include <fstream> 
#include <string>
#include <iomanip> 


using namespace std;

int main (){

    ifstream inFile;
    ofstream outFile;
    
   // Open both of files
   
    inFile.open("inData.txt");
    
    outFile.open("outData.txt");

    // Declare some variables
    
    string fname,lname, dept;
    
float month_gross_salary, bonus, taxes;
float paycheck, actual_bonus, actual_taxes;
    
double distance_traveled, travel_time, avg_speed;
    
int coffee_cup_sold;
double coffee_cup_cost, coffee_total;
    
    
 inFile >> fname >> lname >> dept;  
outFile << "Name: " << fname <<" "<< lname << ", Department: " << dept << endl;
    

outFile << fixed << showpoint;
outFile << setprecision(2);
    
 inFile >> month_gross_salary >> bonus >> taxes; 
outFile << "Monthly Gross Salary: $" << month_gross_salary << ", Monthly Bonus: "<< bonus << "%" <<", Taxes: " << taxes << "%" << endl;

taxes = taxes * .01; //0.3
bonus = bonus * .01;

actual_bonus = bonus * month_gross_salary;
actual_taxes = (month_gross_salary + actual_bonus) * taxes;
    
cout << "test taxes: " << taxes << endl << endl << endl;
cout << "test bonus: " << bonus << endl;
cout << "test taxes: " << actual_taxes << endl; 
cout << "test bonus: " << actual_bonus << endl; 
    // Paycheck
paycheck = (month_gross_salary + actual_bonus) - actual_taxes;
outFile << "Paycheck: $" << paycheck  << endl  << endl;


    //Distance Traveled
inFile >> distance_traveled >> travel_time;
outFile << "Distance Traveled: " << distance_traveled << " miles, Traveling Time: " << travel_time << " hours"<< endl;

avg_speed = distance_traveled / travel_time;
outFile << "Average Speed: " << avg_speed << " miles per hour"  << endl << endl;
    

    
inFile >> coffee_cup_sold >> coffee_cup_cost;

coffee_total = coffee_cup_cost * coffee_cup_sold;
    
outFile <<"Number of Coffee Cups Sold: "<< coffee_cup_sold <<", Cost: $"<< coffee_cup_cost <<" per cup"<< endl;
    
outFile <<"Sales Amount = $" << coffee_total;

inFile.close();
    
outFile.close();
    
    return 0;
}
