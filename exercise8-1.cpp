#include<iostream>
#include<math.h>
using namespace std;

void arrayList(double alpha[50])
{
     int i = 0;
     for(i=0;i<50;i++)
     {
                      if(i<=24)
                      alpha[i] = pow(i,2);
                      else
                      alpha[i] = 3*i;
                      }
     }

void arrayResult(double alpha[50])
{
     int i=0,j=1;
     cout <<"Array numbers: ";
     for(i=0;i<50;i++)
     {
                      cout << alpha[i] << " ";
                      if ((i + 1) % 10 == 0) {
                        cout << endl;
                      }
                    
     }
     cout << "\n";
     }
int main()
{
    double alpha[50];
    arrayList(alpha);
    arrayResult(alpha);
    return 0;
    }
