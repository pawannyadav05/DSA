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
int sizeofll(Node* head){
    int cnt=0;
    Node* t1=head;
    while(t1!=NULL){
        cnt++;
        t1=t1->next;
    }
    return cnt;
}
Node* returnIntersectionbrute(Node* h1,Node* h2){
    Node* t1=h1;
    unordered_map<Node*,int> mpp;
    while(t1!=NULL){
        mpp[t1]=1;
        t1=t1->next;
    }
    Node* t2=h2;
    while(t2!=NULL){
        if(mpp.find(t2)!=mpp.end()) return t2;
        t2=t2->next;
    }
    return NULL;
}
Node* findInter(Node* sh,Node* gh,int d){
    Node* s=sh; Node* g=gh;
    while(d){
        d--;
        g=g->next;
    }
    while(s!=NULL && g!=NULL){
        if(s==g) return s;

        s=s->next;
        g=g->next;
    }
    return NULL;
}

Node* returnIntersectionbetter(Node* h1,Node* h2){
    int n1=sizeofll(h1);
    int n2=sizeofll(h2);
    if(n2>n1) return findInter(h1,h2,n2-n1);
    else return findInter(h2,h1,n1-n2);
}

Node* returnIntersectionOptimal(Node* h1,Node* h2){
    if(h1==NULL || h2==NULL) return NULL;
    Node* t1=h1;
    Node* t2=h2;
    while(t1!=t2){
        t1=(t1==NULL)? h2:t1->next;
        t2=(t2==NULL)? h1:t2->next;
    }
    return t1;
}

int main(){
    
}