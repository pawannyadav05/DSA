#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertarraytodll(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
           prev=prev->next;
    }
    return head;
}

void print(Node* head){
    Node* temp= head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* oddevenll(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* odd=head; Node* even=head->next; Node* eH=head->next;
    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
    odd->next=eH;
    return head;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    
    Node* head = convertarraytodll(arr);
    
    cout << "Original List: ";
    print(head);
    cout << endl;

    head = oddevenll(head);
    
    cout << "Rearranged List (Odd followed by Even): ";
    print(head);
    cout << endl;

    return 0;
}