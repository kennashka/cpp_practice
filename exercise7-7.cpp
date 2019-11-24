#include <iostream>
#include <cstdlib> 

using namespace std;


int numerator1, numerator2, denominator1, denominator2;
int bottom, top;
string plus, substract, multiply, divide, operation;

void subtractFractions(){
        /*
     *  4/5 - 3/8 
     * 40
     * /
     * 
    */
bottom = denominator1 * denominator2;
    top = ( ((bottom/ denominator1) * numerator1) - ((bottom/ denominator2)* numerator2)) ;
    cout << top << "/" << bottom << endl;
}

void multiplyFractions(){
          /*
           * numerator1 = 2
           * numerator2 = 5
           * denominator1 = 4
           * denominator2 = 8
     *   2/4 / 5/8
     * 32
     * 16/32 * 20/32
     * 320/1024
     * /
     * 
    */
bottom = denominator1 * denominator2;
    top = ( numerator1 * numerator2) ;
    cout << top << "/" << bottom << endl;
}

void menu(){
    
}
void divideFractions(){
             /*
     *  2/4 / 5/8
     * 32
     * 16/32 / 20/32
     * 2/4 / 10/16
     * 4/2 * 8/5
     *     div_t result1 = div(100, 6); 
     * 
    div_t top = div(bottom, denominator1); 

    */
    bottom = denominator1 * denominator2;

 top = ( ((bottom/ denominator1) * numerator1) * ((bottom/ denominator2)* numerator2)) ;
    cout << top << "/" << bottom << endl;
}
void addFractions(){
    /*
     *  5/8 + 2/9 
     * 72
     * numerator1 = 5
     * numerator2 = 2
     * denominator1 = 8
     * denominator2 = 9
     * 45 + 16 = 61
     * 61/72
     * /
     * 
    */
bottom = denominator1 * denominator2;
    top = ( ((bottom/ denominator1) * numerator1) + ((bottom/ denominator2)* numerator2)) ;
    cout << top << "/" << bottom << endl;
}


int i = 1;
int main() {
    // Write your main here

  while(i >0){ 
cout << "Enter your operation: " << endl;
cin>> operation;
 
if (operation == "1") {
cout << "Enter your numerator1: " << endl;
cin >> numerator1;
cout << "Enter your denominator1: " << endl;
cin >> denominator1;
cout << "Enter your numerator2: " << endl;
cin >> numerator2;
cout << "Enter your denominator2: " << endl;
cin >> denominator2;
    addFractions();
    
}
     
if (operation == "2") {
    cout << "Enter your numerator1: " << endl;
cin >> numerator1;
cout << "Enter your denominator1: " << endl;
cin >> denominator1;
cout << "Enter your numerator2: " << endl;
cin >> numerator2;
cout << "Enter your denominator2: " << endl;
cin >> denominator2;
    subtractFractions();
}
     
if (operation == "3") {
    cout << "Enter your numerator1: " << endl;
cin >> numerator1;
cout << "Enter your denominator1: " << endl;
cin >> denominator1;
cout << "Enter your numerator2: " << endl;
cin >> numerator2;
cout << "Enter your denominator2: " << endl;
cin >> denominator2;
    multiplyFractions();
}
     
if (operation == "5") {
    cout << "Enter your numerator1: " << endl;
cin >> numerator1;
cout << "Enter your denominator1: " << endl;
cin >> denominator1;
cout << "Enter your numerator2: " << endl;
cin >> numerator2;
cout << "Enter your denominator2: " << endl;
cin >> denominator2;
    divideFractions();
}

if (operation == "4") {
     i = -1;
}
           
      if (i < 0){
    
cout << "Enter your operation: " << endl;
cin>> operation;
cout << "Enter your numerator1: " << endl;
cin >> numerator1;
cout << "Enter your denominator1: " << endl;
cin >> denominator1;
cout << "Enter your numerator2: " << endl;
cin >> numerator2;
cout << "Enter your denominator2: " << endl;
cin >> denominator2;
 divideFractions();
 
}
  }


    return 0;
}
