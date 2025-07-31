#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;
    long int arr[size];
    long int sum=0;

    for (int i = 0; i <= size; ++i)
    {
        long int e;
        cin >> e;
        arr[i] = e;
    }
    for (int i = 0; i < size; ++i)
    {
        sum = sum+arr[i];
    }
    cout<<sum;
}