#include <iostream>
//#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int num = 0;
    int r_sum = 0;
    int l_sum = 0;
    cin>>num;

    int arr[num][num];


    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j < num; ++j)
        {

            cin>>arr[i][j];
        }
    }


    for (int i = 0; i < num; ++i)
    {

        r_sum = r_sum + arr[i][i];
    }



    for (int i = 0; i < num; ++i)
    {
        for (int j = num-1; j >= 0; --j)
        {
            if (j==num-1-i)
            {
                l_sum = l_sum + arr[i][j];
            }
            else
                continue;
        }
    }

    if (l_sum>r_sum){cout<<l_sum - r_sum;}
    else {cout<<r_sum - l_sum;}


    
}
