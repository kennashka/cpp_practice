  
#include <iostream>
#include <cmath> 
#include <iomanip>
   
using namespace std;

const double PI = 3.14159;


double pi_square_root, circum,area;

double r;


int main()
{
cout << fixed << setprecision(2) << endl;
   cout <<  " Input the radius value: " << endl;
    cin >> r;
    
    // r stores the radius of a sphere
   // circum = 2((PI)r));
    // r = (circum/2(PI));
    

double r_cubed1 = pow( r, 2);
area	=	(4 * PI *	r_cubed1);



cout <<  "Surface area of the sphere: 4 * " << "PI" << " * " << r << " ^ 2 = " << area << endl;
    



double r_cubed =  pow(r, 3);
double volume = (PI * r_cubed)*4/3;
   //  pow (7.0, 3.0);
   // 7 ^ 3 = 343.000000



     // (4/3)*Pi*R3
// volume	=	 4/3πr3
 cout <<  "Volume of the sphere: 4 / 3 * " << "PI" << " * " << r << " ^ 3 = "<< volume << endl;


// 

return 0;
}

