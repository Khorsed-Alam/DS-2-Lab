#include<iostream>
#include<string>
using namespace std;

string removeSpaceToLower(string str)
{
    int len=str.length();
    if(len ==0 ) return "";
    if(str[len-1]==' ')
        return removeSpaceToLower(str.substr(0,len-1));
    else
        return removeSpaceToLower(str.substr(0,len-1))
               + string(1,tolower(str[len-1])) ;
}
int main()
{
    cout<<removeSpaceToLower("Hello World It's Me.")<<endl;
}
