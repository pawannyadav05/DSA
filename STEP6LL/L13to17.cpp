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
Node* findM(Node* head){
    Node* f=head; Node* s=head;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
    return s;
}
bool detectloop(Node* head){
    Node* f=head; Node* s=head;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f) return true;
    }
    return false;
}
Node* findstartofloop(Node* head){
    Node* f=head; Node* s=head;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f){
            s=head;
            while(s!=f){
                s=s->next;
                f=f->next;
            }
            return s;
        }
    }
    return NULL;
}

int findlengthofloop(Node* head){
    Node* f=head; Node* s=head;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f){
            int cnt=1;
            Node* t=s->next;
            while(t!=f){
                cnt++;
                t=t->next;
            }
            return cnt;
        }
    }
    return 0;
}
Node* deletemiddleNode(Node* head){
    if (head == NULL || head->next == NULL) return NULL; 
    Node* f=head; Node* s=head; Node* prev=NULL;
    while(f!=NULL && f->next!=NULL){
        f=f->next->next;
        prev=s;
        s=s->next;
    }
    prev->next=s->next;
    delete s;
    return head;
}

int main(){
    
}