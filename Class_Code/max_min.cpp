#include<iostream>
using  namespace std;
int main(){
int arr[5]={1,3,6,7,6};

int max=arr[0];
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<max<<endl;


int min=arr[0];
for(int i=0;i<5;i++){
    if(arr[i]<min)
    {

        min=arr[i];
    }
}
cout<<min<<endl;

}


