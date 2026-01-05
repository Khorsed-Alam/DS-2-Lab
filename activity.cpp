 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

 bool compare(vector<int>&a,vector<int>&b){

 double r1=(1.0 * a[0])/a[1];
 double r2= (1.0 * b[0])/b[1];

 return r1>r2;

 }

 int fractionalKnapsack(vector<int>&val,vector<int>weight,int capacity){
 int n=val.size();

 vector<vector<int>> arr;

 for(int i=0;i<n;i++){
    arr.push_back({val[i],weight[i]});
 }

 sort(arr.begin(),arr.end(),compare);

 int result =0.0;
 int remaining =capacity;

 for(int i=0;i<n && remaining>0;i++){
    if(arr[i][1]<=remaining){
        result+=arr[i][0];
        remaining-= arr[i][1];
    }
    else{
        result +=(1.0 * arr[i][0]/arr[i][1])* remaining;
        break;
    }
 }
 return result;
 }

 int main(){
     vector<int> val={60,100,120};
     vector<int>weight={10,20,30};

     int capacity=50;
     cout<<fractionalKnapsack(val,weight,capacity);
     return 0;
 }
