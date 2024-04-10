//CHECK IF ARRAY IS SORTED OR NOT

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(10);

    for(int i=0; i<v.size(); i++){
        v.push_back(i);
    }

    for(int ele:v){
        cout << ele << " ";
    }
    cout << endl;

    int a = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] < v[i+1]){
            a+=1;
        }
    }

    cout << a;

    return 0;
}