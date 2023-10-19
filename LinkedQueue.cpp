#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class queue{
   node* front;
   node* back;
   public:
   queue(){
       front = NULL;
       back = NULL;
   }

   void push(int x){
    node* n = new node(x);
    if(front == NULL){
        front = n;
        back =n;
        return ;
    }
    back->next = n;
    back = n;
   }

   void pop(){
    if(front ==NULL){
        cout<<"queue underflow"<<endl;
        return ;
    }
    node* todelete = front;
    front = front->next;
    delete todelete;
   }
   int peek(){
    if(front ==NULL){
        cout<<"No element in queue"<<endl;
        return -1;
    }
    return front->data;
   }
   bool empty(){
    if(front == NULL){
        return true;
    }
    return false;
   }
};
int main(){
    queue qe;
    qe.push(1);
    qe.push(2);
    qe.push(3);
    qe.push(4);
    cout<<qe.peek()<<endl;
    qe.pop();
    cout<<qe.peek()<<endl;
    return 0;
}