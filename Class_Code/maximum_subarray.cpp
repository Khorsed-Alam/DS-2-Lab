#include<iostream>
//#include<vector>
using namespace std;

int Maxsubarray(int arr[],int low,int mid, int high){
int leftsum=INT_MIN;
int sum=0;
for(int i=mid;i>=low;i--){
    sum+=arr[i];
    leftsum=max(leftsum , sum);
}
int rightsum=INT_MIN;
sum=0;
for(int j=mid+1;j<=high;j++){

    sum+=arr[j];
    rightsum= max(rightsum,sum);
}
return leftsum+rightsum;

}

int Maxsubarray(int arr[],int low,int high){
if(low==high){
    return arr[low];
}
int mid=(low+high)/2;

int leftsum= Maxsubarray(arr,low,mid);
int rightsum= Maxsubarray(arr,mid+1, high);
int crosssum= Maxsubarray(arr,low,mid,high);

return max(leftsum,rightsum);

}


int main(){
int n;
cout<<"Enter an Array Size: " ;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}


int max = Maxsubarray(arr,0,n-1);

cout<<max<<endl;





}

