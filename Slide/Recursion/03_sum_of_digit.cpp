#include <iostream>
using namespace std;

int Digit_Sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + Digit_Sum(n / 10);
}

int main() {
    int d = Digit_Sum(342);
    cout << "Digit sum is: " << d;
}
