#include<iostream>
#include<string>
#include<vector>
using namespace std;


bool isVowel(char c){
    c=tolower(c);

    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
int VowelCount(string s, int l,int h){
    if(l>h){
        return 0;
    }if(l==h){
        return isVowel(s[l]);
    }

    int mid=(l+h)/2;

    return VowelCount(s,l,mid)+VowelCount(s,mid+1, h);

}
int main(){
    string s="DivideandConquer";
    cout<<VowelCount(s,0,s.length()-1);
}