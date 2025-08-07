#include <bits/stdc++.h>
using namespace std;


int main() {
    int num;
    cin >> num;

    int maxHeight;
    int count;

    for (int i = 0; i < num; ++i)
    {
        int height;
        cin>>height;
        if (height > maxHeight)
        {
            maxHeight = height;
            count = 1;
        }
        else if (height == maxHeight)
        {
            count++;
        }
    }

    cout<< count;

    return 0;
}
