#include <iostream>

using namespace std;

int main() {
    // Write your main here
    // 
  
    int i, n=1,n2=0;
        cout << "Enter Number: " << endl;
    cin >> i;
     

if(i<0)

{

i=i*(-1);

}

while(i/n>=10)

{

n=n*10;

}

cout<<"The num:";

do

{

n2+=i/n;

cout<<i/n<<" ";

i%=n;

n=n/10;

}

while(n!=0);

cout<<"\n Sum of the num:"<<n2;
    return 0;
}
