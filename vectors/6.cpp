#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=0; i<5; i++){
        v.push_back(i);
    }

    int j = 0;
    while(j<v.size()){
        cout<<v[j++]<<" ";
    }

    
}