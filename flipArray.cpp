#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int my_arr[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> my_arr[i];
    }

    for (int i = size-1; i >= 0; --i)
    {
        cout << my_arr[i]<<" ";
    }
}