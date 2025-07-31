#include <iostream>

using namespace std;

int main() {
    string str1;
    cin >> str1;
    int size = str1.size();
    string revStr;

    for (int i = 1; i <= size; ++i)
    {
        revStr.push_back(str1[size-i]);
    }

    if (str1 == revStr){cout<<"YES";}
    else {cout<<"NO";}
}