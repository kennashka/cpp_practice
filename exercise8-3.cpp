#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isVowel(char ch);
string rotate(string pStr, int len);
string pigLatin(string pStr);

void getNextWord(ifstream& inF, char& ch, string& word);

int main()
{
string str;

char ch;

ifstream infile;
ofstream outfile;

infile.open("Ch7_Ex3Data.txt");
if (!infile)
{
cout << "Cannot open input file. Program terminates." << endl;
return 1;
}

outfile.open("Ch7_Ex3Out.txt");

infile.get(ch);

while (infile)
{
while (ch != '\n')
{
if (ch == ' ')
{
outfile << ch;
infile.get(ch);
}
else
{
getNextWord(infile, ch, str);
outfile << pigLatin(str);
}
}

outfile << endl;
infile.get(ch);
}

infile.close();
outfile.close();

return 0;
}

bool isVowel(char ch)
{
switch (ch)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'Y':
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'y':
return true;
default:
return false;
}
}

bool isPunctuation(char ch)
{
switch (ch)
{
case ',':
case '.':
case '?':
case ';':
case ':':
return true;
default:
return false;
   }
}

string rotate(string pStr, string::size_type len)
{
string rStr;

rStr = pStr.substr(1, len) + pStr[0];

return rStr;
}

string pigLatin(string pStr)
{
string::size_type len = pStr.length();

bool foundVowel = false;

bool isPunct = isPunctuation(pStr[len - 1]);
char puncMark;

string::size_type counter;

if (isPunct)
{
puncMark = pStr[len - 1];
len = len - 1;
}

if (isVowel(pStr[0]))                      
pStr = pStr.substr(0,len) + "-way";  
else                                      
{
pStr = pStr.substr(0,len) + '-';

pStr = rotate(pStr, len);                 

len = pStr.length();                  
foundVowel = false;                      

for (counter = 1; counter < len - 1; counter++)
if (isVowel(pStr[0]))
{
foundVowel = true;
   break;
}
else                              
pStr = rotate(pStr, len);

if (!foundVowel)                          
pStr = pStr.substr(1,len) + "-way";
else
pStr = pStr + "ay";
   }

if (isPunct)
pStr = pStr + puncMark;

return pStr;
}

void getNextWord(ifstream& inF, char& ch, string& word)
{
word = ch;

while (ch != ' ' && ch != '\n')
{
inF.get(ch);

if (ch != ' ' && ch != '\n')
word = word + ch;
}
}
