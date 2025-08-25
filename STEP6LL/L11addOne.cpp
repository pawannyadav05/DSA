#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* converttoll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
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
    Node* prev=NULL;
    Node* temp=head;
    while(temp!=NULL){
        Node* ts=temp->next;
        temp->next=prev;
        prev=temp;

        temp=ts;
    }
    return prev;
}
Node* add1(Node* head){
    Node* rH=reverse(head);
    Node* rH1=rH;
    Node* prev=NULL;
    int c=1;
    while(rH!=NULL){
        int d=rH->data+c;
        rH->data=(d%10);
        if(c==0) break;
        c=d/10;

        //updation
        prev=rH;
        rH=rH->next;
    
    }
    if(c==1){
        Node* n =new Node(1);
        prev->next=n;
    }
    return reverse(rH1);
}
int main() {
    vector<int> arr = {9, 9, 9};  // change this line for each test
    Node* head = converttoll(arr);
    head = add1(head);
    print(head);
    return 0;
}

