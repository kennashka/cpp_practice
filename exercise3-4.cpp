//Logic errors.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{  
    double cost;
    double area;
    double bagSize;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Enter the amount of fertilizer, in pounds, "
         << "in one bag: ";
    cin >> bagSize;
    cout << endl;
    
    cout << "Enter the cost of the " << bagSize
         << " pound fertilizer bag: ";
    cin >> fixed >> setprecision(2) >> cost;
    cout << endl;
    
    
    cout << "Enter the area, in square feet, that can be " 
         << "fertilized by one bag: ";
    cin >> area;
    cout << endl;
    
     
 cout << "The cost of the fertilizer per pound is: $"<< fixed << setprecision(2) << cost / bagSize << endl;

cout << "The cost of fertilizing per square foot is: $"
<< fixed << setprecision(2) << cost / area << endl;
    return 0;
}
