#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"enter number of rows:" <<endl;
    cin >> r;
    cout << "enter number of columns:" <<endl;
    cin >> c;

    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            cout << "* " ;
        }
        cout << endl;
        
    }
    return 0;
}