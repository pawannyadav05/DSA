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
Node* converttoarray(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* insertnodeatstart(Node* head,int val){
    return new Node(val,head);
}
Node* insertnodeatend(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp!=NULL){
        if(temp->next==NULL){
            Node* n=new Node(val);
            temp->next=n;
            break;
        }
        temp=temp->next;
    }
    return head;
}
Node* insertnodeatanypos(Node* head,int val,int k){
    if(head==NULL) return new Node(val);
    if(k==1) return new Node(val,head);
    int cnt=1;
    Node* temp=head;
    while(temp!=NULL){
        if(cnt==k-1){
            Node* n =new Node(val);
            n->next=temp->next;
            temp->next=n;
            return head;
        }
        cnt++;
        temp=temp->next;
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
int main(){
    vector<int>a={12,13,14,15};
    Node* head=converttoarray(a);
    print(head);
}