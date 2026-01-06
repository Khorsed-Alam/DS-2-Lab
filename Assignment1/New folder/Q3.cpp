#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<pair<double,double>> points(n);
    for(int i=0;i<n;i++){
        cin>>points[i].first>>points[i].second;
    }

    double minDist=1e9;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double x= points[i].first-points[j].first;
            double y= points[i].second- points[j].second;

            double dist= sqrt(x*x + y*y);

            minDist= min(minDist,dist);

        }
    }
    cout<<minDist<<endl;
    return 0;
}