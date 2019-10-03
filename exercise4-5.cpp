/*
In a right triangle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides.

Write a program that prompts the user to enter the lengths of three sides of a triangle and then outputs a message indicating whether the triangle is a right triangle.

If the triangle is a right triangle, output It is a right angled triangle

If the triangle is not a right triangle, output It is not a right angled triangle


*/

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

double hypotenuse;
    
double side1;
double side2;
double side3;
    

    
cout << "Enter three sides of a Triangle." << endl;
    
cout << "Enter triangle side one: " << endl;
cin >> side1;
   
cout << "Enter triangle side two: " << endl;
cin >> side2;

cout << "Enter triangle side three: " << endl;
cin >> side3;

// right = 90;
// A squared + B squared = C squared 
// side1 *= side1;
// side2 *= side2;
// side3 *= side3;


if (side3 > side2 && side3 > side1){
    hypotenuse == side3;
        cout << "The hypotenuse is: " << side3 <<  " Side Three" << endl;
side1 *= side1;
side2 *= side2;
side3 *= side3;


    if ( side3 == side1 + side2 ){
    cout << " It is a right angled triangle" << endl;
}
    else{
        cout << "It is not a right angled triangle" << endl;
    }
    
}

if (side2 > side1 && side2 > side3){
    hypotenuse == side2;
        cout << "The hypotenuse is: " << side2 << " Side Two" << endl;
side1 *= side1;
side2 *= side2;
side3 *= side3;

if (side2 == side1 + side3 ){
    cout << "  It is a right angled triangle" << endl;
}
    else{
        cout << "It is not a right angled triangle" << endl;
    }
    
    
}
    
if (side1 > side2 && side1 > side3){
    hypotenuse == side1;
    cout << "The hypotenuse is: " << side1 << " Side One" << endl;
side1 *= side1;
side2 *= side2;
side3 *= side3;


if ( side1 == side2 + side3 ){
    cout << " It is a right angled triangle" << endl;
}
    else{
        cout << "It is not a right angled triangle" << endl;
    }
}



    
    return 0;
}

