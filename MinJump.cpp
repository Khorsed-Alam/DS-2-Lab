#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MinJump(vector<int>&arr){
int n=arr.size();

if(n<=1){
    return 0;
}
if(arr[0]==0){
    return -1;
}

int jump=0;
int currentEnd=0;
int maxReach=0;
for(int i = 0; i < n - 1; i++) {
    maxReach = max(maxReach, i + arr[i]);   // ⭐ MISSING LINE

    if(i == currentEnd){
        jump++;

        if(maxReach == i){
            return -1;
        }

        currentEnd = maxReach;
    }
}




return jump;
}

int main(){
vector<int>arr={1,3,2,2,1,4,6};
cout<<"Minimum Jump required: " <<MinJump(arr)<<endl;
return 0;
}

