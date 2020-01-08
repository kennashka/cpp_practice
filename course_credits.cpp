#include <iostream>
#include <iomanip>

using namespace std;

void info2(){

  cout << "Course Code" << "     " << "Credit Hours" << "     " << "Course Cost" << "\n" << endl;
 
}

void info(){
    int count; //Loop counter

double courseCost[4];

int creditHours[4];

string courseCode[4];

int totalHours;
double totalCost;
double totalCostPerHours;

for (count = 0; count < 4; count++) {     
 cout << " Enter your four course code (with no space) then tab and enter the credit hours and then tab and enter the course cost "<< (count + 1) << ":" << endl;
            cin >> courseCode[count] >> creditHours[count] >> courseCost[count];   
        }
info2();
cout << fixed << setprecision(2)<< endl;

cout << courseCode[0]  << "                  " << creditHours[0] <<  "                " << courseCost[0] << endl;
cout << courseCode[1] << "                 " << creditHours[1] << "                 " << courseCost[1] << endl;
cout  <<courseCode[2] << "                   " <<creditHours[2] << "                  " << courseCost[2] << endl;
cout  << courseCode[3] << "                   " << creditHours[3]  << "                " <<courseCost[3]<<endl;

cout <<endl;
cout <<endl;

totalHours = creditHours[0] + creditHours[1] + creditHours[2] + creditHours[3];

totalCost = courseCost[0] + courseCost[1] + courseCost[2] + courseCost[3];

totalCostPerHours = totalCost/totalHours;

cout << "Total Credit Hours: " << totalHours << endl;
cout << "Total Course Costs: " << totalCost << endl;
cout << "Total Credit Hours: " << totalCostPerHours << endl;
}




int main() {


info();

}
