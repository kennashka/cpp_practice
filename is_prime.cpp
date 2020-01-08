#include <iostream>

using namespace std;

int main() {
    
    bool run = true;
    
    char yes;

    int number, i;

  bool isPrime = true;
    
//     while(run){
//   cout << "\nEnter y/n to continue?" << endl;
//     cin >> yes;

//  if (yes =='Y'||yes =='y'){
        
cout << "\nEnter a number?" << endl;

 cin >> number;
            
 for(i = 2; i <= number / 2; ++i)
  {
      if(number % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "\nThis is a prime number" << endl;
  else
      cout << "\nThis is not a prime number" << endl;



            
            
        
  
        
//         else{
//             run = false;
//             cout << "Program terminated...";
//         }
//     }

    
    return 0;
}
