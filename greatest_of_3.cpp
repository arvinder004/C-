#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter any 3 numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is greatest"<<endl;
        }
        else{
            cout<<c<<" is greatest"<<endl;
        }
    }
    if(b>a){
        if(b>c){
            cout<<b<<" is greatest"<<endl;
        }
        else{
            cout<<c<<" is greatest"<<endl;
        }
    }
    return 0;
}