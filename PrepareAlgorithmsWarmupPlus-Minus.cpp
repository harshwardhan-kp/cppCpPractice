#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    // int sum=0;

    int neg = 0;
    int pos = 0;
    int zer = 0;

    for (int i = 0; i <= size; ++i)
    {
        int e;
        cin >> e;
        arr[i] = e;
    }

    for (int i = 0; i < size; ++i)
    {
        if (arr[i]<0)
        {
            neg++;
        }
        else if (arr[i]>0)
        {
            pos++;
        }
        else {zer++;}
    }
    cout << float(pos)/float(size)<< endl;
    cout << float(neg)/float(size)<<endl;
    cout << float(zer)/float(size);


    // for (int i = 0; i < size; ++i)
    // {
    //     sum = sum+arr[i];
    // }
    // cout<<sum;
}