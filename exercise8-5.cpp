#include <iostream>
#include <cstring>

using namespace std;

int main() {

char str[20];

int len;

int index;

cout << "Enter string:" << endl;

cin.get(str, 20);

cout << endl;

cout << "Converted string string:" << endl;

len = strlen(str);

for (index = 0; index < len; index++ )

    cout << static_cast <char>(toupper(str[index]));

cout << endl;

return 0;


}
