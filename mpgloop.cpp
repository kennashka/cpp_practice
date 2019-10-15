#include <iostream>
using namespace std;
int main() {

int numLoop;
int fillUpNum;
float numberGallons;
float milesDriven;

cout << "How many gas fill ups do you want to enter for these calculations?";
cin >> numLoop;

for(fillUpNum = 1; fillUpNum <=numLoop; fillUpNum++){
  cout << "Enter the number of miles you drove for fill up" << fillUpNum << ":";
  cin >> milesDriven;

  cout << "Enter the number of gallons you entered for this fill up:";
  cin >> numberGallons;

  cout << "Your miles per gallon for  this trip was " << milesDriven/numberGallons << endl;

}

return 0;
}
