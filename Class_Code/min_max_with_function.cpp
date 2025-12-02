#include<iostream>
#include<vector>
using namespace std;


pair<int,int> findmaxmin(int arr[],int max,int min){
if(max==min){
    return (arr[min],arr[max]);
}
else if(max== min+1){
    if(arr[min] <arr[max]){
         return (arr[max],arr[min]);
    }
    else
        return (arr(min),arr[max]);

}
else {
   int mid= (max+min)/2;
    pair<int,int> left=findmaxmin(arr,min,mid);
   pair<int,int> right= findmaxmin(arr,mid+1,max);

    int finalMax=Max(left.first,right.first);
    int finalMin= MIn(left.second,right.second);

    return {finalMax,finalMin};


    }

}

using namespace std;

int main(){
    cout<<"Enter array size: " ;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for(int i=0;i<n;i++){cout<<arr[i]<<" " ;}

    int max=arr[0];
    int min=arr[0];

    pair<int,int> findmaxmin(arr,0,n-1);

    cout<<"Max value:" <<result.first<<endl;
    cout<<"Min Value "<<result.second<<endl;
    return 0;
}

