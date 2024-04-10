//COUNT THE ELEMENTS GREATER THAN X

#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;

    for(int i=0;i<10;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int ele:v)
    {
        cout << ele << " ";
    }
    
    int target;
    cout << endl << "enter element: ";
    cin >> target;
    
    cout << "elements greater than "<< target<< ": ";
    for(int i=v.size(); i>0 ; i--){
        if(v[i] > target){
            cout << v[i] << " ";
        }
    }

    return 0;
}