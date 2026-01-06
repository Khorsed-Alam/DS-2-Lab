#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arrival(n);
    vector<int> departure(n);

    for(int a: arrival){
        cin>>a;
    }

    for(int b: departure){
        cin>>b;
    }

    sort(arrival.begin(),arrival.end());
    sort(departure.begin(),departure.end());

    int i=0,j=0;
    int platform=0,min_platform=0;

    while(i<n&& j<n){

        if(arrival[i]<=departure[j]){
            platform++;
            min_platform=max(min_platform,platform);
            i++;
        }else{
            platform--;
            j++;
        }

    }
          cout<<min_platform<<endl;
        return 0;
}