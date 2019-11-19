#include <iostream>
using namespace std;

enum triangleType{scalene, isosceles, equilateral, noTriangle};

triangleType whatShape( int side1, int side2, int side3);


void printShape(triangleType shape);

int main() 
{

  int len1, len2, len3;

  cout << "Enter the lengths of the three sides of a shape." << endl;
  cin>> len1 >> len2 >> len3;
  cout << endl;

cout << "The shape is a: " << endl;

printShape(whatShape(len1, len2, len3));
cout << endl;

return 0;
}

triangleType whatShape(int side1, int side2, int side3){
  if(side1 ==side2 && side2 == side3 && side3 == side1){
      return equilateral;
  }


else if(side1 == side2 || side3 == side2 || side3 == side1 ){
         return isosceles;
}
else if(side1 != side2 && side2 != side3 && side1 + side2 > side3){
         return scalene;
}

else if( side1 + side2 < side3 || side3 + side2 > side1 ||side1 + side3 > side2) {
         return noTriangle;
}
}
  void printShape(triangleType shape){
    switch (shape){
      case noTriangle:
      cout << "noTriangle" <<endl;
      break;

      case isosceles:
      cout << "isosceles" <<endl;
      break;

      case equilateral:
      cout << "equilateral" <<endl;
      break;
        case scalene:
      cout << "scalene" <<endl;
      break;


    }
  }
