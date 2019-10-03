#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
    
    int cookies;
    int boxes = 24;
    int container = 75;
     int boxes_of_cookies;
     int container_of_boxes;
    int leftovers;
    double leftovers_boxes;
     
    
 
    cout << " Enter the total number of cookies: " << endl;
    cin >> cookies;
    
boxes_of_cookies = cookies / boxes;
container_of_boxes =  boxes_of_cookies / container;
leftovers = cookies % boxes;
leftovers_boxes =  boxes_of_cookies - (container * container_of_boxes) ;
    

    
    if (container_of_boxes != 0){
cout << boxes_of_cookies << " " << leftovers << " " << container_of_boxes << " " <<  leftovers_boxes << endl;


   }
    else {
        cout << boxes_of_cookies << " " << leftovers << " " << container_of_boxes << " " << boxes_of_cookies << endl;

    }
       


    return 0;
}
