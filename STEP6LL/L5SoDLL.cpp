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
long long digitfromdll(Node* head){
    long long rem=0;
    Node* temp=head;
    while(temp!=NULL){
        rem=rem*10 + (temp->data);
        temp=temp->next;
    }
    return rem;
}
Node* dllfromdigit(long long a){
    vector<int>vt;
    while(a>0){
        vt.push_back(a%10);
        a/=10;
    }
    reverse(vt.begin(),vt.end());
    return convertarraytodll(vt);
}
int main(){
    vector<int>a={3,8,7};
    vector<int>b={5,2,4,1};
    Node* head=convertarraytodll(a);
    Node* head1=convertarraytodll(b);
    Node* Ans= dllfromdigit(digitfromdll(head1)+digitfromdll(head));
    print(Ans);
}