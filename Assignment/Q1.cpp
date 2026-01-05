#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arrsize,numQuery;

    cin>>arrsize >>numQuery;

  int arr[100];
    
    for(int i=1;i<=arrsize;i++){
        cin>>arr[i];

    }
    while(numQuery --){
        int l,r;
        cin>>l>>r;

        int countZero=0;

        for(int i=l ;i<=r;i++){
            if(a[i]==0){
                countZero++;
            }
        }
        cout<<countZero<<endl;
    }
return 0;

}