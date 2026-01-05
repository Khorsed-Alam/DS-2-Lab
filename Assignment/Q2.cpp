#include<iostream>
using namespace std;
int main(){
    int arrsize;
    cin>>arrsize;
    int arr[100];

    for(int i=0;i<arrsize;i++){
        cin>>arr[i];
    }

    int count=0;

    for(int i=0;i<arrsize;i++){
        for(int j=i+1;j<arrsize;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}