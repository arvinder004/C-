#include<iostream>
#include<map>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    
    unordered_map<int, string>m;
        m[1000]="M";
        m[900]="CM";
        m[500]="D";
        m[100]="C";
        m[90]="XC";
        m[50]="L";
        m[10]="X";
        m[9]="IX";
        m[5]="V";
        m[1]="I";

    // unordered_map<string,int>m;
    //             m["M"]=1000;
    //             m["MC"]=900;
    //             m["D"]=500;
    //             m["C"]=100;
    //             m["XC"]=90;
    //             m["L"]=50;
    //             m["X"]=10;
    //             m["IX"]=9;
    //             m["V"]=5;
    //             m["I"]=1;

    for(auto e:m){
        cout<< e.first <<"  "<<e.second<<endl;
    }

    return 0;
    }

