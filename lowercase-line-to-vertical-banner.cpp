#include <iostream>
using namespace std;

char convert(char c){
    return c-'a'+'A';
}

int main(){
    while(true){
        string temp;
        cin >> temp;
        if (temp.size()==0)
        {break;}

        for (int i = 0; i < temp.size(); ++i)
        {
            cout<<convert(temp[i]);
        }
        cout<<endl;
    }
}