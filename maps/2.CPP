//FROM  LET US C++ 

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<string,int> m1{
        {"rahul" , 645},
        {"aditi" , 555},
        {"salil" , 455},
        {"vibha" , 470},
        {"beena" , 378}
    };

    //display the data

    cout<<"Total elements in map m1 : "<<m1.size()<<endl;
    cout<<"elements in map m1:"<< endl;
    for(auto i : m1){
        cout<<i.first << "  " << i.second << endl;
    }


cout<<endl<<"Adding new elements"<<endl;
    //add new key-value pair
    m1["dinesh"] = 333;

    //update existing value
    m1["beena"] = 555;

    for(auto i:m1){
        cout<<i.first << "  " << i.second << endl;
    }

    //one more way to add key-value pair

    pair<string,int>p;
    p.first = "shailesh";
    p.second = 665;
    m1.insert(p);

   
    //search for a given student

    string str;
    cout<<"enter student to be searched : ";
    cin >> str;

    map<string,int> ::iterator itr;
    itr = m1.find(str);
    if(itr != m1.end()){
        cout<<itr->first<<"   "<<itr->second;
    }
    else{
        cout<<"no such student exists";
    }






}