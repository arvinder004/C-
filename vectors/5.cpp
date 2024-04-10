//FOR EACH LOOP

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=0;i<5;i++)
    {
        v.push_back(i);
    }

    //for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
}