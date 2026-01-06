#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int>student(n);
    vector<int>room(m);

    for(int s: student){
        cin>>s;
    }

    for(int r: room){
        cin>>r;
    }

    sort(student.begin(),student.end());
    sort(room.begin(), room.end());

    int i=0;
    int j=0;
    int count=0;

    while(i<n && j<m){
      if(room[j]>=student[i]){
          count++;
        i++;
        j++;
      }else{
        j++;
      }
    }
    cout<<count<<endl;
    return 0;



}