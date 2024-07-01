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

node* convert_ARR_to_LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;

    for(int i=1; i<arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

//LENGTH OF THE LINKED LIST
int lenght_LL(node* head){
    int count = 0;
    node* temp = head;
    while (temp)
    {
        temp = temp->next;
        count++;
    }
    return count;    
}

//Searching in linked list
int search_LL(node* head, int value){
    node* temp = head;
    while(temp){
        if(temp->data == value) cout << "element found!";

        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr = {12,5,8,7};

    node* head = convert_ARR_to_LL(arr);
    cout << head->data; 

    //printing the linked list
    node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout<< " length of the linked list is " << lenght_LL(head);

    search_LL(head , 7);
}