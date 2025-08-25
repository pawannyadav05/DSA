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
void print(Node* head){
    Node* temp= head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* reverse(Node* head){
    Node* prev=NULL;
    Node* cur=head;
    Node* temp=NULL;
    while(cur!=NULL){
        temp=cur->next;
        cur->next=prev;

        prev=cur;
        cur=temp;
    }
    return prev;
}
Node* findM(Node* head){
    Node* s=head; Node* f=head;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
    return s->next;
}
bool isPalindrom(Node* head){
    if(head==NULL ||head->next==NULL) return true;
    Node* nH=findM(head);
    Node* rH=reverse(nH);
    Node* fi=head; Node* se=rH;
    while(se!=NULL){
        if(fi->data!=se->data){
            reverse(rH);
            return false;
        }
        fi=fi->next;
        se=se->next;
    }
    reverse(rH);
    return true;
}
int main(){

}