#include <bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node* link;
	Node(int n){
		this->data = n;
		this->link = NULL;
	}
};
class Stack {
	Node* top;
public:
	Stack() { top = NULL; }
	void push(int data){
		Node* temp = new Node(data);
		if (!temp) {
			cout << "\nStack Overflow";
			return;
		}
		temp->data = data;
		temp->link = top;
		top = temp;
	}
	int Top(){
		if (top!=NULL)
			return top->data;
		else
			return -1;
	}
	void pop(){
		Node* temp;
		if (top == NULL) {
			cout << "\nStack Underflow" << endl;
			return;
		}
		else {
			temp = top;
			top = top->link;
			free(temp);
		}
	}
	void display(){
		Node* temp;
		if (top == NULL) {
			cout << "\nStack Underflow";
			return;
		}
		else {
			temp = top;
			while (temp != NULL) {
				cout << temp->data;
				temp = temp->link;
				if (temp != NULL)
					cout << " -> ";
			}
		}
	}
};
int main(){
	Stack s;
	s.push(11);s.push(22);s.push(33);s.push(44);
	s.display();
	cout << "\nTop element is " << s.Top() << endl;
	s.pop();s.pop();
	s.display();
	cout << "\nTop element is " << s.Top() << endl;
	return 0;
}
