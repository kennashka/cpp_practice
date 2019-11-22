#include <iostream>
#include <string>

using namespace std;

void removeLetters(string& str);

bool lookingFor(char ch);

int main()
{
 
 string str;

 cout << "Enter a word with one or more of the selected character: ";
cin >> str;

cout << endl;


removeLetters(str);

cout << "After removing the seleceted letters: " << str << endl;

return 0;

}

void removeLetters(string& str)
{

  int len = str.length();

  int index = 0;

  while(index < len)
{
if(lookingFor(str[index]))



{

  str = str.substr(0, index) + str.substr(index + 1, str.length());

  len = str.length();
}


else
index++;
}

}

bool lookingFor(char ch){

switch(ch){
  case 'a':
   case 'A':
    case 'e':
     case 'E':
      case 'i':
       case 'I':
        case 'o':
         case 'O':
         case 'u':
         case 'U':

         return true;
         default:
         return false;
}



}
