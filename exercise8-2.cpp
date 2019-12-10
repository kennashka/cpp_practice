#include <iostream>
using namespace std;


int lastLargestIndex() {
    int Values[15];   //creating array to hold values
    int count; //Loop counter
    cout << "Please enter 14 random numbers!" << endl;


for (count = 0; count < 14; count++) {     
            cout << "Number " << (count + 1) << ":" << endl;
            cin >> Values[count];   
        }


     cout <<  "values: " << Values[0]  <<" " << Values[1] << " " <<Values[2] << " " <<Values[3] <<" " <<Values[4] <<" " <<Values[5] <<" " <<Values[6] <<" " <<Values[7] <<" " <<Values[8] <<" " <<Values[9] <<" " <<Values[10] <<" " <<Values[11] <<" " <<Values[12] <<" " <<Values[13] <<" " << Values[14] <<endl;
    
    int n =14;
    int largest;


   largest = Values[0];
   for(int i = 1;i < n; i++) {
      /* We are comparing largest variable with every element
       * of array. If there is an element which is greater than
       * largest variable value then we are copying that variable
       * to largest, this way we have the largest element copied
       * to the variable named "largest" at the end of the loop 
       *
       */
      if(largest > Values[i])
         largest = Values[i];
   } 
   cout<<"Smallest element in array is: "<<largest;
   return 0;
}


int main() {
  lastLargestIndex();

return 0;
}
