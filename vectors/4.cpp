//FOR LOOP

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    for(int i=0; i<5; i++)
    {
        int element;
        cin>>element;
        v1.push_back(element);
    }

    vector<int> v2(5);
    for(int i=0; i<v2.size(); i++)
    {
        int element;
        cin>>element;
        v2[i] = element;
    }

    cout<<"v1 : ";
    for(int j = 0; j<v1.size();j++)
    {
        cout<<v1[j]<<" ";
    }

    cout<<"v2 : ";
    for(int j = 0; j<v2.size();j++)
    {
        cout<<v2[j]<<" ";
    }

 }