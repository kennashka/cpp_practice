#include <iostream>

using namespace std;

bool isVowel(char vowels);


int main() {

    char letter;
    
    bool flag = false;
    cout << "Enter one letter-upper case or lower case: " << endl;
 cin >> letter;
    
      if (isVowel('p') ){
          
          flag = 0;
          cout << letter << " is a vowel: "<< flag << endl;

          
      }
    if (isVowel(letter)){
        
        flag = 1;
        
cout << letter << " is a vowel: "<< flag << endl;

    }
   
    
    else{
        cout << letter << " is not a vowel: " << flag << endl;
    }
      
    
    
    return 0;
    
}

bool isVowel( char vowels){
        switch(vowels){
                
            case 'A':;
            case 'E':;
            case 'I':;
            case 'O':;
            case 'U':;

                
            case 'a':;
            case 'e':;
            case 'i':;
            case 'o':;
            case 'u':;
                case 'p':;
               case 'G':;
             

                 return true;
            default:
                return false;
        }

}
