//unordered maps

#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
#include<vector>

using namespace std;

class conversion{
    public:
        int RomanToInt(string s){
            unordered_map<char,int>m;
                m['I']=1;
                m['V']=5;
                m['X']=10;
                m['L']=50;
                m['C']=100;
                m['D']=500;
                m['M']=1000;

            int num = 0;
            
            for(int i=0; i<s.length(); i++){
                if(m[s[i]] < m[s[i+1]]){
                    num -= m[s[i]];
                }
                else{
                    num += m[s[i]];
                }
            }
            return num;
        }

        string IntToRoman(int num){
            vector<pair<int,string>>m{
                {1000,"M"},
                {900,"CM"},
                {500,"D"},
                {100,"C"},
                {90,"XC"},
                {50,"L"},
                {10,"X"},
                {9,"IX"},
                {5,"V"},
                {1,"I"}
            };

            string roman = "";

            for(int i=0; i<m.size(); i++){
                while(num >= m[i].first){
                    roman += m[i].second;
                    num -= m[i].first;
                }
            }
            return roman;
        }
};

int main(){
    cout<<"--------------ROMAN INTEGER CONVERSION--------------"<<endl;
    cout<<"(please enter roman numerals in capital (I,V,X,L,C,D,M))"<<endl;
    cout<<"TO CONVERT ROMAN TO INTEGER PRESS 1"<<endl;
    cout<<"TO CONVERT INTEGER TO ROMAN PRESS 2"<<endl;

    int val;
    cin>>val;

    if(val == 1){
        string s;
        cout<<"ENTER ROMAN NUMBER:"<<endl;
        cin>>s;
        conversion c1;
        cout<<"INTEGER NUMBER : "<<c1.RomanToInt(s);
    }
    else if(val == 2){
        int n;
        cout<<"ENTER INTEGER NUMBER:"<<endl;
        cin>>n;
        conversion c1;
        cout<<"ROMAN NUMERAL : "<<c1.IntToRoman(n);
    }

    return 0;

}