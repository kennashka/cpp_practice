#include <iostream>

using namespace std;

int main (){

  double grade;

  cout << "Enter your Grade: ";
  cin >> grade;
  cout << endl;

  if (grade>=90){
  cout << "You have an A." << endl;
  }
else if (grade >=80){
    cout << " You have a B." << endl;
}

else if (grade >=70){
      cout << " You have a C." << endl;
}

else if (grade >=60){
      cout << " You have a D" << endl;
}

else{     cout << " You have a F." << endl;


}

return 0;
}

/*


int main (){

  double gpa;

  cout << "Enter your GPA: ";
  cin >> gpa;
  cout << endl;

  if (gpa>=3.50){
  cout << "Way to go - You made the Deans Honor List." << endl;
  }
else if (gpa >=3.0){
    cout << " Congulations - You made the Honor Roll." << endl;
}

else if (gpa >=2.0){
      cout << " Satistifactory work - you qualify for graduation." << endl;
}
else{     cout << " Your GPA is below the graduation requirements. See your academic advisor." << endl;


}

return 0;
}

*/
