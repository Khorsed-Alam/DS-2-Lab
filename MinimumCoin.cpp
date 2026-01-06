 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

 int minCoin(vector<int>& coin,int amount ){

 int n=coin.size();
 sort(coin.begin(),coin.end());
 int res=0;

 for(int i=n-1;i>=0;i--){
    if(amount>=coin[i]){
        int count=(amount/coin[i]);
        res+=count;

        amount-=(count *coin[i]);
    }
    if (amount==0){
        break;
    }
 }


 return res;

 }

 int main(){
 vector<int>coin={5,2,10,1};
 int amount;
 cin>>amount;
 cout<<minCoin(coin,amount)<<endl;
 return 0;
 }
