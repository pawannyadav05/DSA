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

Node* deleteheadnode(Node* head){
    if(head==nullptr) return nullptr;
    Node* temp=head;
    head=head->next;
    delete temp; //free(temp);
    return head;
}
Node* deletetailnode(Node* head){
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}
Node* deletepaticularposition(Node* head, int k){
    if(head==nullptr) return nullptr;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=1;Node* temp=head;Node* prev=NULL;
    while(temp!=NULL){
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* deletepaticularvalue(Node* head, int k){
    if(head==NULL) return NULL;
    if(head->data==k){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    Node* temp=head;Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==k){
            prev->next=temp->next;
            delete temp;
            break;
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
    vector<int>a={12,13,14,15};
    Node* head=converttoarray(a);
    Node* nL=deletepaticularposition(head,2);
    print(nL);
}