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
Node* sort012(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* z=new Node(-1);
    Node* o=new Node(-1);
    Node* t=new Node(-1);
    Node* zt=z; Node* ot=o; Node* tt=t;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zt->next=temp;
            zt=zt->next;
        }else if(temp->data==1){
            ot->next=temp;
            ot=ot->next;
        }else{
            tt->next=temp;
            tt=tt->next;
        }
        temp=temp->next;
    }
    zt->next=o->next;
    ot->next=t->next;
    tt->next=NULL;

    head=z->next;
    delete z;delete o;delete t;
    return head;
}
int main(){
    vector<int>a={1,2,0,0,2,1,0,2};
    Node* h=converttoarray(a);
    print(h);
    Node* h1=sort012(h);
    cout<<"\n";
    cout<<"After Sorting\n";
    print(h1);
}