#include <iostream>

#include <iomanip>

using namespace std;
int main() {

int exam1, exam2, exam3;
float avg, hw, fin;
float grade2;
char grade;

float weighted = .60;

float weighted_hw = .40;


float avg_hw_score;



for (int x = 1; x <=3; x++){
cout << fixed << setprecision(2) << endl;

cout << "Enter your score for Exam "  << x++ << ":" << endl;
cin >> exam1;

cout << "Enter your score for Exam "  << x++ << ":" << endl;
cin >> exam2;

cout << "Enter your score for Exam "  << x++ << ":" << endl;
cin >> exam3;

}

cout << "Enter your homework score: "   << ":" << endl;
cin >> hw;

avg = (exam1 + exam2 + exam3)/3;

grade2 = avg;
grade2 = avg;
grade2 = avg;

if (grade2 >=90 && grade2 <= 100){
grade = 'A';

}
if (grade2 >=80 && grade2 <= 89){
grade = 'B';

}
if (grade2 >=70 && grade2 <= 79){
grade = 'C';

}
if (grade2 >=60 && grade2 <= 69){
grade = 'D';

}
if (grade2 >=50 && grade2 <= 59){
grade = 'F';

}


cout << fixed << setprecision(2) << endl;

cout << "Your exam average score was: " <<  avg  << endl;

float weighted_exam = (weighted * avg);

cout << "Your weighted exam average was " << weighted_exam << " out of 60.00 points"  << endl;

avg_hw_score = hw * weighted_hw;
cout << "Your homework score average was " <<  avg_hw_score << " out of 40.00  points" << endl;

float final_score = weighted_exam + avg_hw_score ;

cout << "Here it is everyone, your final numberic score was: " << "'"<< final_score << "'"<< "!" << endl;


cout << "You have earned a final grade of " <<  "'"<<grade <<  "'" << " in this class!"  << endl;

return 0;

}
