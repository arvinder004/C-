#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=1; i<=5; i++)
    {
        v.push_back(i);
    }

    for(int ele:v){
        cout<<ele<<" ";
    }

    cout<<endl;

    v.insert(v.begin()+2,10);
    v.insert(v.begin()+2,12);
    
    for(int ele:v){
        cout<<ele<<" ";
    }

    cout<<endl;

    v.erase(v.end()-2);

    for(int ele:v){
        cout<<ele<<" ";
    }

}