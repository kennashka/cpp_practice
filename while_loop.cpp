#include <iostream>
#include <cmath>

using namespace std;

int main() {
int num;
int digit;

int sum = 0;
int pwr = 0;


cout << "Enter an integer: ";
cin >> num;

cout << endl;


cout << "The digits of " << num << " are: ";
 while (num/pow(10.0, pwr) >=10){
pwr++;

 }

 while(num > 0){
   digit = num/ pow(10.0, pwr);
   cout << digit << " ";

   sum = sum + digit;

   num = num % static_cast <int>(pow(10.0, pwr));

   pwr--;
if (num < 0){
 sum = num * -1;
}
   cout << endl;
   cout << " The sum of the digits = " << sum << endl;
 }

 return 0;
}
