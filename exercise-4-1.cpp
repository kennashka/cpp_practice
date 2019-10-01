#include <iostream>

using namespace std;

int main() {
    // Write your main here
    // 
    // 
   int num;
    
  cout << "Enter a number: " << endl;
    cin >> num;
    if (num == 0){
        cout << "The number: " << num << " is zero" << endl;
    }
              if (num > 0){
        cout << "The number is " << num << " is positive" << endl;
          
    }
        if (num < 0){
        cout << "The number: " << num << " is negative" << endl;
        }
    
    return 0;
}
