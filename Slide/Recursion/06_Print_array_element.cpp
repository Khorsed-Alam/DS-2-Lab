#include<iostream>
using namespace std;
void printArray(int a[], int idx){
    if(idx<0){
        return ;
    }
    printArray(a,idx-1);
    cout<<a[idx]<<endl;
}
int main(){
    int a[]= {4,5,6,7,8,9,10};
    printArray(a,sizeof(a)/ sizeof(int)-1);
}