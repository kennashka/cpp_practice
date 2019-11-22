#include <iostream>
#include <iomanip>

using namespace std;

//const float royalty_rates;
double net_price;
double estimated_number;

namespace royaltyRates 
    
{ 
    class royal{
        public:
void display(){
float published = 20000.00;
float finalManuscript = 5000.00;
float fixed_royalties = .125;
            
float first_fourk_sold = .10;
double copies_sold = 4000;
double net_price_for_copies_sold_over4k = .14;

     double copies;
    double copies2;
double calculate;
    double subtract;
    
if ( net_price > copies_sold){
 calculate = (copies_sold * first_fourk_sold * estimated_number);
 // 20,000
subtract = net_price - copies_sold;
    copies = (subtract * (net_price_for_copies_sold_over4k * estimated_number) + calculate);
}
else {
   copies = first_fourk_sold * net_price * estimated_number;

    }

cout << fixed << setprecision(2) << endl;
    cout << "Royalty option1: " <<  published + finalManuscript << endl;
    cout << "Royalty option2: " << fixed_royalties * net_price * estimated_number<< endl; 
    cout << "Royalty option3: " << copies << endl;
        } };

       
} 



int main() {
    // Write your main here
  cout << "Enter the net price of each copy of the novel: " << endl;
    cin >> net_price;

cout << "Enter the estimated number of copies that will be sold: " << endl;
 
 cin >> estimated_number;
    
 royaltyRates::royal obj; 
  
 obj.display(); 

    
    return 0;
}

