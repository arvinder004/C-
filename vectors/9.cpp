//COUNT THE NUMBER OF OCCURENCES OF A PARTICULAR ELEMENT X

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
    int pos = 0;

    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == target){
            pos += 1;
        }
    }

    

    cout << target << " occured "<< pos << "times" << endl;

    return 0;
}