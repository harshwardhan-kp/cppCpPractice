#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a;
    cin >> b;

    string numName[] = {"zero","one","two",
                        "three","four","five","six",
                        "seven","eight","nine"
                        };

    for (int n = a; n <= 9; n++)
    {
        cout << numName[n]<<endl;
    }

    for (int i = 10 ;i <= b; ++i)
    {
        if (i%2==0) {cout<<"even\n";}
        else {cout<<"odd\n";}
    }

    // if (a%2==0){cout<<"even"<<endl;}
    // else {cout<<"odd"<<endl;}

    // if (b%2==0){cout<<"even";}
    // else {cout<<"odd";}

}