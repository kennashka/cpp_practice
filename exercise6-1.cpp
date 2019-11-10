#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(string str);


int main(){

string str[6] = {"madam", "abba", "22", "67876", "444244", "trymeuemyrt"}; 
//cout << "Enter a string" << endl;
 for( int i=0; i<6; i++)
    {
        //Testing function
        if(isPalindrome(str[i]))
        {
            cout << str[i] << " is a palindrome, ";
        }
        else
        {
            cout << str[i] << " is not a palindrome, ";
        }
    }    



// if (isPalindrome(str) == 1){
//  cout << str << " is a palindrome" << endl;
// }
// if (isPalindrome(str) == 0){
//  cout << str << " is not a palindrome" << endl;
// }


   return 0; 
}



bool isPalindrome(string str) 
{
int length = str.length(); 
for (int i = 0; i < length / 2; i++) {
    if (str[i] !=  str[length - i - 1]) {
         return false;
    } // if    

    
  } // for loop
  
 return true;
}
