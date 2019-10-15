#include <iostream>
#include <iomanip>

using namespace std;
int main() {

int numLoop;
int fillUpNum;
float numberGallons;
float milesDriven;
float total_cost;
float discount = 0.05;
float discounted_price;
float total_number_of_miles;
float avg_miles;


cout << "How many gas fill ups do you want to enter for these calculations? ";
cin >> numLoop;

for(fillUpNum = 1; fillUpNum <=numLoop; fillUpNum++){

  cout << fixed << setprecision(2);
  cout << "Enter the number of miles you drove for fill up " << fillUpNum << ": " ;
  cin >> milesDriven;

  cout << "Enter the number of gallons you entered for this fill up: ";
  cin >> numberGallons;

total_cost = (milesDriven/numberGallons) * 2.5;

  cout << "Your miles per gallon for  this trip was " << milesDriven/numberGallons << endl;




  if (total_cost > 50){
    discounted_price = discount * total_cost;
     discounted_price = total_cost - discounted_price;
   cout << "Total Cost for Gas: " << "$" << discounted_price << endl ;

  }
  else {
  cout << "Total Cost for Gas: " << "$" << total_cost << endl;
  }





}

milesDriven += milesDriven;


cout << "total miles addition: " << milesDriven << endl;

avg_miles = milesDriven/numLoop;

cout << "average miles: " << avg_miles << endl;

return 0;
}
