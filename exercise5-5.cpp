#include <iostream>

using namespace std;

int main()

{

     int num1, num2;

     int multipleofThree = 0, multipleofFive = 0;

   
     cout << "Enter two integers: " << endl;

     cin >> num1 >> num2;

     if (num2 < num1)

     {

          int num3 = num2;

          num2 = num1;

          num1 = num3;

     }

     //Run the loop from first number till the second number.

     for (int j = num1; j <= num2; j++)

     {

          //Check if the current value of j is a multiple of 3 or not.

          if (j % 3 == 0)

          {

              //If the current value of j is a multiple of 3 then increase the

              //value of the variable multipleofThree by 1.

              multipleofThree++;

          }

          //Check if the current value of j is a multiple of 5 or not.

          if (j % 5 == 0)

          {

              //If the current value of j is a multiple of 5 then

              //increase the value of the variable multipleofFive by 1

              multipleofFive++;

          }

     }

     //Display the number of multiples of 3 found between the two integers entered by the user.

     cout << "The number of multiples of 3 between the two integers : " << multipleofThree << endl;

    

     //Display the number of multiples of 5 found between the two integers entered by the user.

     cout << "The number of multiples of 5 between the two integers : " << multipleofFive << endl;

     return 0;

}
