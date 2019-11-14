#include <iostream>
using namespace std;

enum shapeType{square, rectangle, notSquareNotRectangle};

shapeType whatShape( int side1, int side2, int side3, int side4);


void printShape(shapeType shape);

int main() 
{

  int len1, len2, len3, len4;

  cout << "Enter the lengths of the four sides of a shape." << endl;
  cin>> len1 >> len2 >> len3 >> len4;
  cout << endl;

cout << "The shape is a: " << endl;

printShape(whatShape(len1, len2, len3, len4));
cout << endl;

return 0;
}

shapeType whatShape(int side1, int side2, int side3, int side4){
  if(side1 ==side2 && side2 == side3 && side3 == side4){
      return square;
  }


else if(side1 ==side2 && side3 == side4){
         return rectangle;
}
else if(side1 ==side4 && side2 == side3){
         return rectangle;
}
else if(side1 ==side3 && side4 == side2){
         return rectangle;
}
else {
         return notSquareNotRectangle;
}
}
  void printShape(shapeType shape){
    switch (shape){
      case square:
      cout << "square" <<endl;
      break;

      case rectangle:
      cout << "rectangle" <<endl;
      break;

      case notSquareNotRectangle:
      cout << "notSquareNotRectangle" <<endl;
      break;


    }
  }
