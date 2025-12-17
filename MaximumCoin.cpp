#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MaxCoin(vector<int>&coin,int amount){
int n= coin.size();
sort(coin.begin(),coin.end());
int res=0;

for(int i=0;i<n;i++){
    if(amount>=coin[i]){
        int count= amount/coin[i];
        res+=count;
        amount-= count*coin[i];

        cout<<"coins "<< coin[i] <<" use "<<count<<" Times" <<endl;
    }
}
}

int main(){
vector<int>coin={2,5,10,50,1};
int amount;
cin>>amount;
MaxCoin(coin,amount);
return 0;
}

