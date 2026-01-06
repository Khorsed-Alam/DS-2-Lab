#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;

    vector<int>arr(n);

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    while(q--){
        int l,r;
        cin>>l>>r;

        int count=0;
        for(int i=l;i<=r;i++){
            if(arr[i]==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}