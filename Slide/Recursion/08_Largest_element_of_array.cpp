#include<iostream>
using namespace std;

int main(){
    int a[]={414,52,61,7,181};
    int l=largest(a,sizeof(a)/sizeof(int)-1);
    cout<<"Largest : "<<l<<endl; 
}