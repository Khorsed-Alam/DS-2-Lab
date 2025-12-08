#include <iostream>
#include <string>
using namespace std;

bool palindrome(string str) {
    int l = str.length();
    if (l == 0 || l == 1)
        return true;
    if (str[0] == str[l - 1])
        return palindrome(str.substr(1, l - 2));
    else
        return false;
}

int main() {
    if (palindrome("abeeba"))
        cout << "Palindrome";
    else
        cout << "Not palindrome";
}
