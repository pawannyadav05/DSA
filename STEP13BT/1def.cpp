#include <bits/stdc++.h>
//lect 1 to 8
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
}; 

//Depth First Search 
void preorder(Node* n){
    if(n==nullptr) return;
    cout<< n->data<<"\n";
    preorder(n->left);
    preorder(n->right);
}

void inorder(Node* n){
    if(n==nullptr) return;
    preorder(n->left);
    cout<< n->data<<"\n";
    preorder(n->right);
}

void postOrder(Node* n){
    if(n==nullptr) return;
    preorder(n->left);
    preorder(n->right);
    cout<< n->data<<"\n";
}

 //Breadth Frist Search
void levelOrderTravesal(Node* n,vector<vector<int>>& ans){
    if(n==NULL) return;
    queue<Node*> q;
    q.push(n);
    while(!q.empty()){
        int size=q.size();
        vector<int> lev;
        for(int i=0;i<size;i++){
            Node* x=q.front();
            q.pop();
            if(x->left!=NULL) q.push(x->left);
            if(x->right!=NULL) q.push(x->right);
            lev.push_back(x->data);
        }
        ans.push_back(lev);
    }
}

int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    inorder(root);
}
