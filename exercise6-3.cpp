#include <iostream>

using namespace std;



bool isVowel(char vowels);

 string letter;

int tally;

int main() {
      
    
    bool flag = false;
    cout << "Enter some characters: " << endl;
getline(cin, letter);
    

for (  int i =0; letter.length() > i; i ++){

char test = letter[i];

if (isVowel(test)){
tally++;
}
// if (letter[i] == isVowel( char vowels)){

// }

}

//cout << "test: " << test2 << endl;

cout << "There are: " << tally << " vowels in this sentence." << endl;

    
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

                 return true;
            default:
                return false;
        }

}
