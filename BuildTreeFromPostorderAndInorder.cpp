#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data  = val;
        left =NULL;
        right=NULL;
    }
};
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* BuildTree(int postorder[],int inorder[],int start,int end){
    static int idx = end;
    if(start > end){
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    Node* root = new Node(curr);
    if(start==end){
        return root;
      }
    int pos = search(inorder,start,end,curr);
    root->right = BuildTree(postorder,inorder,pos+1,end);
    root->left = BuildTree(postorder,inorder,start,pos-1);
    return root;
}


void printInorder(Node* root){
     if(root==NULL){
        return;
     }
     printInorder(root->left);
     cout<<root->data<<" ";
     printInorder(root->right);
}

int main(){
    int postorder[] ={4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};
    Node* root = BuildTree(postorder,inorder,0,4);
    printInorder(root);
    return 0;
}