#include <bits/stdc++.h>
//iterative PreOrder Traversal;
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
vector<int> prOrderTravesal(Node* root){
    vector<int>ans;
    if(root==NULL) return ans;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        ans.push_back(root->data);
        if(root->right!=NULL) st.push(root->right);
        if(root->left!=NULL) st.push(root->left);
    }
    return ans;

}
vector<int> inOrderTravasal(Node* root){
    vector<int>ans;
    if(root==NULL) return ans;
    Node* r1=root;
    stack<Node*> st;

    while(!st.empty() || r1!=NULL){
        while(r1!=NULL){
            st.push(r1);
            r1=r1->left;
        }
        r1=st.top();
        st.pop();
        ans.push_back(r1->data);

        r1=r1->right;
    }
    return ans;

    
}
vector<int> postOrder2Stack(Node* root){
    vector<int>ans;
    if(root==NULL) return ans;
    stack<Node*> st1,st2;
    st1.push(root);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);

        if(root->left!=NULL) st1.push(root->left);
        if(root->right!=NULL) st1.push(root->right);
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    return ans;
}

vector<int>postOrder1stack(Node* root){
    vector<int>ans;
    if(root==NULL) return ans;
    stack<Node*>st;
    Node* curr=root;
    
    //algo
    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        else{
            Node* temp=st.top()->right;
            if(temp==NULL){
                temp=st.top();
                st.pop();
                ans.push_back(temp->data);
                while(!st.empty() && temp==st.top()->right){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->data);
                }
            }
            else curr=temp;
        }
    }
    return ans;
}

int main(){
    /*
            1
           / \
          2   3
         / \
        4   5
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> ans = postOrder1stack(root);

    cout << "Postorder Traversal: ";
    for(int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}