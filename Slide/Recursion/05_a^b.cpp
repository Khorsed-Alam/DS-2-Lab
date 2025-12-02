#include<iostream>
using namespace std;

int power(int a,int b){
    if(abs (b)==0){
        return 1;
    }
    return a*power(a,b-1);
}

void printPower(int a,int b){
    int x= power(a,abs(b));
    cout<<a<<" To the power of "<<b <<" : ";
    if(b<0){
        cout<<"1/"<<x;

    }else
    cout<<x;
}
int main(){
    int a=2,b=-5;
    printPower(a,b);
}