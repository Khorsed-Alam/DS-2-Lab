#include<iostream>
#include<vector>
using namespace std;

int EvenNumber(int arr[],int l,int h){
    if(l>h){
        return 0;
    }if(l==h){
        return (arr[l]%2==0);
    }

    int mid=(l+h)/2;

    return EvenNumber(arr,l,mid)+EvenNumber(arr,mid+1,h);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &val: arr){
        cin>>val;
    }
    cout<<"EvenNumber: "<<EvenNumber(arr.data(),0,n-1);
    return 0;
}