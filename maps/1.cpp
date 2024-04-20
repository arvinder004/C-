//MAPS IS USED TO STORE DATA IN KEY:VALUE PAIR
//MAP IS AN ASSOCIATIVE ARRAY
//ordered maps are sorted
//unordered maps are not sorted
//UNORDERED MAP USES HASHING

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marks;

    marks["arvinder"] = 100;
    marks["vidushi"] = 101;
    marks["dineet"] = 69;

    marks["aakash"] = 80;
    marks["iknoor"] = 65;
  
    // map<string, int> :: iterator itr;
    // for(itr = marks.begin(); itr!=marks.end(); itr++){
    //     cout << (*itr).first<<" "<<(*itr).second<<endl;
    // }
    
    for(auto i : marks)
        cout<<"name:" << i.first << "   "
        << "marks:" << i.second << endl;

    return 0;
}