#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>> str1>>str2;

    cout << str1.size()<< " " <<str2.size()<<endl;
    cout << str1+str2<<endl;

    string strf = str1;
    string strff = str2;
    strf[0]=str2[0];
    strff[0]=str1[0];
    cout << strf<<" "<<strff;

}