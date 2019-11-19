#include <iostream>
#include <string>

using namespace std;

void removeLetters(string& str);

bool lookingFor(char ch);

int main()
{
 
 string str;

 cout << "Enter a word with one or more of the selected character(n, N, r, R, s, S, t, T):";
cin >> str;

cout << endl;

cout << "Before removing the selected letters: " << str << endl;

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
  case 'n':
   case 'N':
    case 'r':
     case 'R':
      case 's':
       case 'S':
        case 't':
         case 'T':

         return true;
         default:
         return false;
}



}
