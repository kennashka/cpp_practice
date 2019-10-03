#include <iostream>

using namespace std;

int main() {
    // Write your main here
    // 
   int num;
       
 cout << "Enter an integer between 0 and 35: " << endl;
cin >> num;
    
    if (num <=9){
      cout << num << endl;  
    }
    if (num >= 10 && num <= 35){
      cout << static_cast<char>('A' + (num - 10)) << endl; 
    }

    
    
    return 0;
}
