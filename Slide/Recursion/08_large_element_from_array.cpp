#include <iostream>
#include <climits>
using namespace std;

int largest(int a[], int n) {
    if (n == 1)
        return a[0];

    return max(a[n - 1], largest(a, n - 1));
}

int main() {
    int a[] = {414, 52, 61, 7, 18};
    int size = sizeof(a) / sizeof(a[0]);

    int l = largest(a, size);
    cout << "Largest: " << l << endl;
}
