#include <iostream>
#include <cmath>

using namespace std;

bool isWhiteSpace( char input);
bool isEqual( double one, double two, double three);

string user;

int product;
char convert_string_to_character;

double floor_of_three;
double num1, num2, num3;

int main() {
    
cout << "Enter Characters: ";

getline(cin, user);


char convert_string_to_character = user[0];

if (isWhiteSpace(convert_string_to_character)) {
  
  cout << "The character you entered is a whitespace character" << endl;
}
else {
   cout << "The character you entered is not a whitespace character" << endl;
}


cout << "Enter Three Numbers: " << endl;

cin >> num1;
cin >> num2;
cin >> num3;

cout << num1 << num2 << num3 << endl;

if(isEqual(num1,num2,num3)){
cout<<"The product of the first two numbers is equal to the floor of the third number"<<endl;
}
else{
cout<<"The product of the first two numbers is not equal to the floor of the third number"<<endl;
}

    return 0;
}


bool isWhiteSpace( char input){
        switch(input){
                
            case ' ':;

                 return true;
            default:
                return false;
        }

}


bool isEqual( double one, double two, double three){
  ///function returns true if the floor of the product //of the first two numbers equals the floor of the 

  
return floor(one*two)==floor(three);
    
}





