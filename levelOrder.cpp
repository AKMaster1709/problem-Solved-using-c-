#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data  = val;
        left =NULL;
        right=NULL;
    }
};

int sumAtKLevel(Node* root,int k){
    if(root==NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level =1, sum =0;

    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            if(level == k){
                sum += node->data;
            }
            if(node->left)
              q.push(node->left);
            if(node->right)
              q.push(node->right);
        }else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
void LevelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }else if(!q.empty())
        q.push(NULL);
    }
}
int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}
int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left) + sumNodes(root->right) + root->data;
}
int main(){
     Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right  = new Node(7);
    cout<<sumAtKLevel(root,3)<<endl;
    cout<<countNodes(root)<<endl;
    cout<<sumNodes(root)<<endl;
    return 0;
}