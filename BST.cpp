#include<iostream>
#include<queue>
using namespace std;

class Node{
   public:
   int data;
   Node* left;
   Node* right;
   Node(int d){
     this->data = d;
     this->left = NULL;
     this->right = NULL;
   }
};
Node* insertIntoBST(Node* root,int d){
    if(root==NULL){
        root = new Node(d);
        return root;
    }
    if(d > root->data){
        root->right = insertIntoBST(root,d);
    }
    if(d<root->data){
        root->left = insertIntoBST(root,d);
    }
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!= -1){
        insertIntoBST(root,data);
        cin>>data;
    }
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
int main(){
    Node* root = NULL;
    cout<<"enter data to construct BST"<<endl;
    takeInput(root);
    LevelOrder(root);
    return 0;
}