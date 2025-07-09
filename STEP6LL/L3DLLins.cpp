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
Node* insertatstart(Node* head,int val){
    if(head==NULL) return new Node(val);
    Node* temp=head;
    Node* n=new Node(val);
    n->next=temp;
    temp->back=n;
    head=n;
    return head;
    // return new Node(val,head,NULL);
}
Node* insertatend(Node* head,int val){
    //it use constructor write a logic in such way u dont need counstructor
    if(head==NULL) return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* n=new Node(val,NULL,temp);
    temp->next=n;
    return head;
}
Node* insertKthposition(Node* head,int val,int k){
    if(head==NULL) return new Node(val);
    if(k==1){
        Node* T =new Node(val,head,NULL);
        head->back=T;
        head=T;
        return head;
    }
    int cnt=1;
    Node* Temp=head;
    Node* Prev=NULL;
    while(Temp!=NULL){
        if(cnt==k){
            Node* n=new Node(val,Temp,Temp->back);
            Temp->back->next=n;
            Temp->back=n;
            n->next=Temp;
            return head;
        }
        Prev=Temp;
        Temp=Temp->next;
        cnt++;
    }
    if(cnt==k){
        Node* x=new Node(val,Prev,NULL);
        Prev->next=x;
    }
    return head;
}

Node* insertBeforVale(Node* head,int val,int dv){
    if(head==NULL) return new Node(val);
    if(dv==head->data){
        Node* T =new Node(val,head,NULL);
        head->back=T;
        head=T;
        return head;
    }
    Node* Temp=head;
    while(Temp!=NULL){
        if(dv==Temp->data){
            Node* n=new Node(val,Temp,Temp->back);
            Temp->back->next=n;
            Temp->back=n;
            n->next=Temp;
            return head;
        }
        Temp=Temp->next;
    }
    return head;
}

int main(){

}