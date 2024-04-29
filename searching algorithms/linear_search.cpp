#include<iostream>
using namespace std;

int linear_search(int a[], int size, int target){
    for(int i=0; i<size; i++){
        if(a[i] == target){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int a[] = {10,40,45,3,24,52,234,12,43,12,54,32,34,65};
    int n = sizeof(a)/sizeof(n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<"   ";
    }

    int target = 0;
    cout<<endl<<"enter element to be found";
    cin>>target;

    int ser = linear_search(a,n,target);

    if(ser == -1){
        cout << "ELEMENT NOT FOUND";
    }
    else{
        cout<<"ELEMENT FOUND AT "<<ser<<" INDEX"; 
    }

}