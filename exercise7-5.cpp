

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void getData(char &marital_status, int &num_Persons, double &gross_Salary, double &pension);

double taxAmount(char marital_status, int num_Persons, double gross_Salary, double pension);

double getFederal_Tax(double taxable_Income);



int main ()

{

     char marital_status = ' ';

     int num_Persons = 0;

     double gross_Salary = 0, pension_contri = 0;

     double federal_tax = 0, taxable_Income = 0;

     cout<<"Program to compute the federal tax: "<<endl<<endl;

     cout<<"Please enter the below prompted details. "<<endl<<endl;


     getData(marital_status, num_Persons, gross_Salary, pension_contri);

 
     taxable_Income = taxAmount(marital_status, num_Persons, gross_Salary,   pension_contri);



     federal_tax = getFederal_Tax(taxable_Income);


     cout<<"\nFederal Tax details of a person: "<<endl;

     cout<<"Marital Status: "<<marital_status<<endl;

     cout<<"Number of Persons in the family: "<<num_Persons<<endl;

     cout<<"Income earned: "<<gross_Salary<<endl;

     cout<<"Pension Plan contribution: "<<pension_contri<<endl;

     cout<<"\nTaxable Income: "<<taxable_Income<<endl;

     cout<<"\nThus, the Federal Tax payable is: "<<federal_tax<<endl;



     return 0;

}


void getData(char &marital_status, int &num_Persons, double &gross_Salary, double &pension)

{

     char reply;

     int num_of_children = 0;


     cout << "Please enter your Marital Status: "

          <<"\n[M]arried or [S]ingle: ";

     cin >> marital_status;


     if (marital_status == 'm' || marital_status == 'M')

     {


          cout<<"\nEnter number of children under age 14: ";

          cin>>num_of_children;

          num_Persons = 2 + num_of_children;

         
              cout << "Please enter your salary: ";

              cin>> gross_Salary;

              cout<< endl;

       

     }


     else

     {

          cout << "\nPlease enter your salary: ";

          cin >> gross_Salary;

          cout << endl;

          num_Persons = 1;

     }


     cout << "Please enter your Pension Plan contribution(limit upto 6%): ";

     cin >> pension;


     while(pension > 6.00)

     {

          cout<<"The limit is upto 6% only." <<endl;

          cout << "Please enter your Pension Plan contribution(limit upto 6%): ";

          cin >> pension;

     }   


     pension = pension/100 * gross_Salary;

     cout << endl;

}



double taxAmount(char marital_status, int num_Persons, double gross_Salary, double pension)

{


     double stand_exemption = 0;

     double taxableIncome;



     if(marital_status == 'm' || marital_status == 'M')

          stand_exemption = 7000;



     else

          stand_exemption = 4000;


cout << fixed << setprecision(2) << endl;
     taxableIncome = gross_Salary -( (1500.00 * num_Persons) + pension + stand_exemption);

    


     return (taxableIncome);

}


double getFederal_Tax(double taxable_Income)

{


     if(taxable_Income >= 0 && taxable_Income <= 15000)

          return taxable_Income * 0.15;

     else if(taxable_Income >= 15001 && taxable_Income <= 40000)

  return ((2250.00 + taxable_Income * 0.25) - 3750);

     else

 return ((8460.00 + taxable_Income * 0.35) - 14000);

}
