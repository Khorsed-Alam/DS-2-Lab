#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int &x: arr){
        cin>>x;
    }

    sort(arr.begin(), arr.end());

    int median= arr[n/2];

    long cost=0;

    for(int i=0;i<n;i++){
        cost+=abs(arr[i]-median);
    }

    cout<<cost<<endl;
    return 0;
}