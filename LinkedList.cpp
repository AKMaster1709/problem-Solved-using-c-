#include <iostream>
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
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
 
    }
     temp->next=n;
} 
  void display(node* head){
      node* temp = head;
      while(temp!=NULL){
          cout<<temp->data<<"->";
          temp = temp->next;
      }
      cout<<"NULL"<<endl;
  }

  void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
  }

bool linearSearch(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

node* reverse(node* &head){

    node* prevptr = NULL;
    node* currentptr = head;
    node* nextptr;

    while(currentptr != NULL){
        nextptr = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next = NULL;

    return newhead;
}

node* reversek(node* &head,int k){

   node* prevptr = NULL;
    node* currentptr = head;
    node* nextptr;
  int count = 0;
    while(currentptr!=NULL && count < k){
        nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next = reversek(nextptr,k);
    }
    return prevptr;
}

    int length(node* head){
        int l=0;
        node* temp = head;
        while(temp!=NULL){
            l++;
            temp = temp->next;
        }
        return l;
    }

    node* kAppend(node* &head,int k){
      
      node* newHead;
      node* newTail;
      node* tail=head;

      int l= length(head);
      k=k%l;
      int count = 1;
      while(tail->next!= NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
      }
      newTail->next=NULL;
      tail->next=head;

      return newHead;
    }


int main(){
   
   node* head = NULL;
   insertAtTail(head,1);
    insertAtTail(head,2);
     insertAtTail(head,3);
      insertAtTail(head,4);
       insertAtTail(head,5);
        insertAtTail(head,6);
         display(head);
          insertAtHead(head,0);
           display(head);
            cout<<linearSearch(head,3)<<endl;
             cout<<linearSearch(head,6)<<endl;
              int k = 4;
               node* newhead = reversek(head,k);
                display(newhead);
                int m = 3;
                node*newhd=kAppend(head,m);
                display(newhd);
                 
             
    return 0;
}