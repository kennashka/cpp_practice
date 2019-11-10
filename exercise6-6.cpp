#include <iostream>

using namespace std;

void even_or_odd(int num) {
    if(num % 2 == 0) {
        cout << 2*num << endl;
    } else {
        cout << 5*num << endl;
    }
}

void sum_and_avg(int n, int m, int &sum, double &avg) {
    sum = 0;
    double count = 0;
    for(int i = n; i <= m; ++i) {
        sum += i;
        count++;
    }
    avg = sum / count;
}

int main() {
 
    int num, n, m, sum;
    cout << "Enter number: ";
    cin >> num >> n >> m;
      even_or_odd(num);
    double avg;
    sum_and_avg(n, m, sum, avg);
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}

