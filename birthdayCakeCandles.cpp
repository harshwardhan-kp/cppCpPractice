#include <bits/stdc++.h>
using namespace std;


int main() {
    int num;
    cin >> num;

    vector<int> candles(num);

    int maxHeight=0;

    for (int i = 0; i < num; ++i)
    {
        cin >> candles[i];
        maxHeight = max(maxHeight, candles[i]);

    }

    int count=0;
    for (int i = 0; i < num; ++i)
    {
        if (maxHeight == candles[i])
        {
            count++;
        }

    }
    cout<< count;
    return 0;
}
