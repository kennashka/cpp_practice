//**********************************************************
// Program: Telephone Digits
// This is an example of a sentinel-controlled loop. This
// program converts uppercase letters to their corresponding
// telephone digits.
//**********************************************************
#include <iostream>

using namespace std;

int main()
{
    char letter;
    int digit, num, num2;
    
    cout << "Program to convert uppercase letters to "
         << "their corresponding telephone digits."
         << endl;
    
    cout << "To stop the program enter #." << endl;
    
    cout << "Enter an uppercase letter: ";
    cin >> letter;
    cout << endl;
    
    while (letter != '#')
    {
        cout << "Letter: " << letter;
        cout << ", Corresponding telephone digit: ";
        
        num = static_cast<int>(letter) 
            - static_cast<int>('A');
        
        if (0 <= num && num < 26)
        {
            digit = (num / 3) + 2;
            
            if (((num / 3 == 6 ) || (num / 3 == 7))
                  && (num % 3 == 0))
                digit = digit - 1;
            
            if (digit > 9)
                digit = 9;
            
            cout << digit << endl;
        }   

           num2 = static_cast<int>(letter) 
            - static_cast<int>('a');
        
 if (0 <= num2 && num2 < 26)
        {
            digit = (num2 / 3) + 2;
            
            if (((num2 / 3 == 6 ) || (num2 / 3 == 7))
                  && (num2 % 3 == 0))
                digit = digit - 1;
            
            if (digit > 9)
                digit = 9;
            
            cout << digit << endl;
        }   
        else
            cout << "Invalid input." << endl;
        
        cout << "\nEnter another uppercase "
             << "letter to find its corresponding "
             << "telephone digit." << endl;       
        cout << "To stop the program enter #."
             << endl;
        
        cout << "Enter a letter: ";
        cin >> letter;
        cout << endl;
    } //end while
    
    return 0;
}
