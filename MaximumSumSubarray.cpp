#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int maxcrossing(int arr[],int l,int mid, int h){

    int sum=0;
    int leftsum=INT_MIN;

    for(int i=mid;i>=l;i++){
        sum+=arr[i];
        leftsum=max(leftsum,sum);
    }

    sum=0;
    int rightsum=INT_MIN;
    for(int i=mid+1;i<=h;i++){
        sum+=arr[i];
        rightsum=max(rightsum,sum);
    }

    return leftsum+rightsum;
}

int MaxSum(int arr[],int l,int h){

    if(l==h){
        return arr[l];
    }
    int mid=(l+h)/2;
    return max(MaxSum(arr,l,mid),
               max(MaxSum(arr,mid+1,h),maxcrossing(arr,l,mid,h)));
}



int main(){
int n;
cin>>n;
vector<int>arr(n);
for(auto &val: arr){
    cin>>val;
}

cout<<"Maximum Sum Subarray:" << MaxSum(arr.data(),0,n-1)<<endl;
return 0;
}
