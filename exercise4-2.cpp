#include <iostream>

using namespace std;

int main() {
    // Write your main here
int num1, num2, num3;
  cout << " Enter three numbers: " << endl;
   cin >> num1 >> num2 >> num3;
    //
    if (num1 < num2 && num2 < num3){
        cout << num1 << " " << num2 <<  " " << num3 << endl;
    }
    
      if (num1 > num2 && num1 < num3){
        cout << num2 <<  " " << num1 <<  " " << num3 << endl;
    }
    
      if (num3 < num2 && num3 < num1){
        cout << num3 << " " << num2 <<  " " << num1 << endl;
     }
        
      if (num1 > num2 && num1 > num3){
        cout << num2 << " " << num3 <<  " " << num1 << endl;
     }
    if (num1 > num2 && num2 < num3){
        cout << num2 << " " << num3 <<  " " << num1 << endl;
     }
    return 0;
}
