#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data1, node* next1){
        data = data1;
        next = next1;
    }

    node(int data1){
        data = data1;
        next = nullptr;
    }

};

int main(){
    node* y = new node(2, nullptr);
    cout << y->data << endl;
    cout << y->next;

    return 0;
}