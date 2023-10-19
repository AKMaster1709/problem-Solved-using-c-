#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
}

void printList(Node* n){
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

void insertAtHead(Node** head_ref , int new_data){
      Node* new_Node = new Node();
      new_Node->data = new_data;
      new_Node->next = (*head_ref);
      (*head_ref) = new_Node;
}
// Time complexity = o(1)
// Auxiliary space = o(1)
void insertAfterNode(Node* prev,int new_data){
    if(prev ==NULL){
        cout<<"previous pointer can not be NULL"<<endl;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev->next;
    prev->next = new_node;
}
// Time complexity = o(1)
// Auxiliary space = o(1)

void insertAtTail(Node** head_ref, int new_data){
     
     Node* last = *head_ref;
     Node* new_node = new Node();
     new_node->data = new_data;
     new_node->next = NULL;
     if(last->next==NULL){
        last->next = new_node;
        return;
     }
     while(last->next!=NULL){
        last = last->next;
     }
     last->next = new_node;
     return;

}
// Time complexity = o(n)
// Auxiliary space = o(1)

void deleteN(Node** head, int position)
{
    Node* temp;
    Node* prev;
    temp = *head;
    prev = *head;
    for (int i = 0; i < position; i++) {
        if (i == 0 && position == 1) {
            *head = (*head)->next;
            free(temp);
        }
        else {
            if (i == position - 1 && temp) {
                prev->next = temp->next;
                free(temp);
            }
            else {
                prev = temp;
  
                // Position was greater than
                // number of nodes in the list
                if (prev == NULL)
                    break;
                temp = temp->next;
            }
        }
    }
}
int main(){
    return 0;
}