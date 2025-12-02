#include<iostream>
using namespace std;
int sum(int n){
    if(n<=0){
        return 0;
    }
    return (n+sum(n-1));
}
int main(){
    int n=5;
    cout<<" Sum from 1 to "<<n<<" : "<<sum(n);
}