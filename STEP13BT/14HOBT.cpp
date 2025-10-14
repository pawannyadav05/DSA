#include <bits/stdc++.h>

using namespace std;
//include lecture 15 check for balanced binary tree

struct treeNode{
    int data;
    struct treeNode *left;
    struct treeNode *right;
    treeNode(int val){
        data=val;
        left=right=NULL;
    }
}; 
int maxDepth(treeNode* root){
    if(root==NULL) return 0;

    int lh=maxDepth(root->left);
    int rh=maxDepth(root->right);

    return 1+ max(lh,rh);
}
bool checkBalanceed(treeNode* root){
    if(root==NULL) return true;

    int lh=maxDepth(root->left);
    int rh=maxDepth(root->right);

    if(abs(rh-lh)>1) return false;
    bool left=checkBalanceed(root->left);
    bool right=checkBalanceed(root->right);

    if(!left || !right ) return false;

    return true;
}
int main(){

}