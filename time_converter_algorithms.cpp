#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
    // Write your main here
    //
    //
    string name;
    int seconds;
    int minutes;
    int hours;
    int remainder;


   int counter;
   int newCounter;

   int result;
   int newResult;

           float total, newTotal;

    cout << "Enter your name followed by a space and the toatl number of seconds for the event. Use any number, big or small..." << endl;

    cin >> name >> seconds;
    hours = seconds / 3600;
    remainder = seconds  - (hours * 3600);

    minutes = remainder / 60;
    seconds = seconds - (hours * 3600) - (minutes * 60);

    cout << name <<", your number converts to \n" << hours << " hours, " << minutes << "minutes, and " << seconds << " seconds! " << endl;

    counter = 10;
 result = ++counter + 10;

    cout << "Results: " << result << endl;
     cout << "Counter using ++counter (pre-increment): " << counter << endl;

    newResult = counter++ + 10;
    cout << "newResult: " << newResult << endl;

     cout << "newCounter using counter++ (pre-increment): " << counter << endl;

    total = 3 * 7 - 6 + 2 * 5/ 4 + 6;
    cout << endl;
   newTotal = (((3 * 7 -6 )) + ((2 * 5) / 4)  + 6);
    cout << endl;
