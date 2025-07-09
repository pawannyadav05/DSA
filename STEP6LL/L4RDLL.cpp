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
Node* reverse(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* prev=NULL;
    Node* cur=head;
    while(cur!=NULL){
        prev=cur->back;
        cur->back=cur->next;
        cur->next=prev;

        cur=cur->back;
    }
    return prev->back;
}

int main(){
    vector<int>a={13,14,15,16};
    Node* head=convertarraytodll(a);
    print(head);
    Node* nHead=reverse(head);
    print(nHead);
}
