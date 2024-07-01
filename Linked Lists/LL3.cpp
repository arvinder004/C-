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

//CREATION OF LL
node* convert_ARR_to_LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node * mover = head;

    for(int i=1; i<arr.size(); i++ ){
        node* temp = new node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

//DELETE HEAD
node* delete_head(node* head){
    if(head == NULL) return head;

    node* temp = head;
    head = head -> next;
    free(temp);

    return head;
}

//DELETE THE TAIL OF  THE LL
node* delete_tail(node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    node* temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;

    }
    free(temp->next);
    temp->next = NULL;
    
    return head;
    
}

node* delete_at_k(node* head, int k){
    if(head == NULL) return head;

    if(k == 1){
        node* temp = head;
        head = head -> next;
        free(temp);

        return head;
    }

    int count = 0;
    node* temp = head; 
    node* prev = NULL;
    while (temp != NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;     
}

int main(){
    vector<int> arr = {6,5,4,6,3};
    node* head = convert_ARR_to_LL(arr);

    // head = delete_head(head);
    // cout << head->data;

    // head = delete_tail(head);
    // node* temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }

    head = delete_at_k(head, 2);
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


}