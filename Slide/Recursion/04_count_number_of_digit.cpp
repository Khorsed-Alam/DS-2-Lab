#include<iostream>
using namespace std;
int CountDigit(int n){
    if(n<=0){
        return 0;
    }
    return 1+ CountDigit(n/10);
}
int main(){
    int d = CountDigit(100);
    cout<<"Digit Count: "<<d;
}