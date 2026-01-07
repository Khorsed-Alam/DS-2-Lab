#include<iostream>
#include<vector>
using namespace std;

pair<int,int>findMinMax(int arr[], int l,int h){
if(l==h){
    return {arr[l],arr[l]};
}
if(h==l+1){
    if(arr[l]>arr[h]){
        return {arr[l],arr[h]};
    }
    else{
        return {arr[h],arr[l]};
    }
}
int mid=(l+h)/2;
auto left= findMinMax(arr,l,mid);
auto right=findMinMax(arr,mid+1,h);

return {
    max(left.first,right.first),
    min(left.second,right.second)
};
}
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int &val: arr){
    cin>>val;
}
auto res=findMinMax(arr.data(),0,n-1);
cout<<" Max: " <<res.first<<"Min:"<<res.second<<endl;
return 0;
}
