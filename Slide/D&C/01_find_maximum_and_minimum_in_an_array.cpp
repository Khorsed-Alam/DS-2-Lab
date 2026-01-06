#include <iostream>
using namespace std;

pair<int,int> findMaxMin(int a[], int low, int high){
    if(low == high)
        return {a[low], a[low]};

    if(high == low + 1){
        if(a[low] > a[high])
            return {a[low], a[high]};
        else
            return {a[high], a[low]};
    }

    int mid = (low + high) / 2;
    auto left = findMaxMin(a, low, mid);
    auto right = findMaxMin(a, mid + 1, high);

    return {max(left.first, right.first),
            min(left.second, right.second)};
}

int main(){
    int a[] = {3, 5, 1, 9, 2};
    int n = 5;
    auto res = findMaxMin(a, 0, n - 1);
    cout << "Max: " << res.first << "\nMin: " << res.second;
}
