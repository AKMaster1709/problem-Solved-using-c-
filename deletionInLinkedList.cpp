#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
int calcLen(Node* node){
    int len = 0;
    while(node!=NULL){
        node = node->next;
        len++;
    }
    return len;
}
void insert(Node** head, int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
void deleteStart(Node** head){
    Node* temp = *head;
     cout<<"Value Deleted  "<<(*head)->data<<endl;
    *head = (*head)->next;
    free(temp);
}
void deleteEnd(Node** head){
    Node* tempNode = *head;
    Node* previous;
    if(*head == NULL){
        cout << ("\nEmpty List, can't delete"); 
        return; 
    } 
    if(tempNode->next == NULL){
        cout << "\nValue Deleted: " << (*head)->data;
        *head = NULL;
        return;
    }
    while (tempNode->next != NULL) {
        previous = tempNode; 
        tempNode = tempNode->next; 
    }
    previous->next = NULL;
    cout << "\nValue Deleted: " << tempNode->data<<endl;
    free(tempNode);
}
void deleteNthNode(int n, Node** head){
    Node* temp = *head;
    Node* prevNode;
    int len = calcLen(*head);
    if(n < 1 || n > len){
        cout << "Invalid" << endl; 
        return; 
    } 
    if(n == 1){ 
        *head = (*head)->next;
        cout << temp->data << " deleted" << endl; 
        delete(temp); 
        return; 
    } 
    while (--n) { 
        prevNode = temp; 
        temp = temp->next; 
    }
    prevNode->next = temp->next;
    cout << temp->data << " deleted" << endl;;
    delete(temp);
}

void printList(Node* temp){
    cout << "Linked List : ";
    while(temp!=NULL){
        cout << temp->data << " "; 
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    insert(&head, 25);insert(&head, 24);insert(&head, 23);
    insert(&head, 22);insert(&head, 21);insert(&head, 20);
    printList(head); 
    deleteNthNode(2, &head);deleteNthNode(4, &head);
    printList(head);
    deleteEnd(&head);deleteStart(&head);
    printList(head); 
    return 0; 
}