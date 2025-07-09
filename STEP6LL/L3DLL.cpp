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

Node* deletefirstNode(Node* head){
    if(head==NULL||(head->back ==nullptr && head->next==nullptr)){
        delete head;
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    head->back=NULL;
    delete temp;
    return head;
}

Node* deletelastNode(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    while(temp!=NULL){
        if(temp->next == NULL){
            prev->next=NULL;
            delete temp;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* deleteKthNode(Node* head,int k){
    if(head==NULL) return NULL;
    if(k==1){
        Node* temp=head;
        head=head->next;
        if(head!=NULL) head->back=NULL;
        delete temp;
        return head;
    }
    Node* temp=head; Node* prev=NULL;
    int cnt=1;
    while(temp!=NULL){
        if(k==cnt){
            Node* fwd=temp->next;
            prev->next=temp->next;
            if(fwd != NULL)fwd->back=prev;
            delete temp;
            return head;
        }
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* deleteValNode(Node* head,int val){
    if(head==NULL) return NULL;
    if(head->data==val){
        Node* temp=head;
        head=head->next;
        if(head!=NULL) head->back=NULL;
        delete temp;
        return head;
    }
    Node* temp=head; Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==val){
            Node* fwd=temp->next;
            prev->next=temp->next;
            if(fwd != NULL)fwd->back=prev;
            delete temp;
            return head;
        }
        prev=temp;
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
    vector<int> a={1,2,3,4,5};
    Node* head=convertarraytodll(a);
    print(head);
    return 0;
}