#include<iostream>
using namespace std;
int ArraySum(int a[], int idx){
    if(idx<0){
        return 0;
    }
    return a[idx]+ArraySum(a,idx-1);
}

int main(){
int a[]={4,5,6,7,8,};
int sum=ArraySum(a,sizeof(a)/sizeof(int)-1);
cout<<"Array Sum: "<<sum<<endl;
}