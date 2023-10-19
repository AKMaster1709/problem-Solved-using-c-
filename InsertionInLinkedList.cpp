#include <iostream>
using namespace std;
int size = 0;
class node{
    public:
     int data;
     node* next;
     node(int val){
       data = val;
       next = NULL;
     } 
};
 void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
    size++;
  }
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;  
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
     temp->next=n;
     size++;
}
void InsertAtSpecifiedPos(node** head,int val,int pos){
    if(pos<1||pos>size+1){
        cout<<"Invalid Position "<<endl;
    }else{
         while (pos--) {
            if (pos == 0) {
                node* temp = new node(val);
                temp->next = *head;
                *head = temp;
            }
            else
              head = &(*head)->next;
        }
        size++;
    }
}
  void display(node* head){
      node* temp = head;
      while(temp!=NULL){
          cout<<temp->data<<"->";
          temp = temp->next;
      }
      cout<<"NULL"<<endl;
  }
int main(){
    node* head = NULL;
    insertAtHead(head,1); insertAtHead(head,2);
    insertAtTail(head,7);insertAtTail(head,9);
    InsertAtSpecifiedPos(&head,6,3);InsertAtSpecifiedPos(&head,5,6);
    display(head);
    return 0;
}
 
 