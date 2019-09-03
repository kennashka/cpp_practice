
#include <iostream>

using namespace std;

int main() {
    double score1;
    double score2;
    double score3;
    double score4;
    double score5;
    double average;
    // Write your main here
    // 
cout << "Enter your first test score: " << endl;
cin >> score1;
cout << "Enter your second test score: " << endl;
cin >> score2;
cout << "Enter your third test score: " << endl;
cin >> score3;
cout << "Enter your fourth test score: " << endl;
cin >> score4;
cout << "Enter your fifth test score: " << endl;
cin >> score5;

average = (score1 + score2 + score3 + score4 + score5) / 5;
    
cout << "Your average test score is: " << average << endl;
    return 0;
}
