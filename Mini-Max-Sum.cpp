#include <bits/stdc++.h>
using namespace std;


int main() {
    int num = 5;
    long int arr[num];
    long long int arr_sum=0;

    long int lar=0;
    long int sm=0;

    

    for (int i = 0; i < num; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; ++i)
    {
        arr_sum = arr_sum+arr[i];
    }

    for (int i = 0; i < num; ++i)
    {
        int time=0;
        int low_time=0;

        for (int j=0; j<num; ++j) 
        {
            if (arr[i] >= arr[j] ) {
                time++;
            }
        }

        for (int j=0; j<num; ++j) 
        {
            if (arr[i] <= arr[j] ) {
                low_time++;
            }
        }

        if (time == 5){lar = arr[i];}
        else {time=0;}

        if (low_time == 5){sm = arr[i];}
        else {low_time=0;}
    }

    cout<<arr_sum-lar<<" ";
    cout<<arr_sum-sm<<endl;

    return 0;
}
