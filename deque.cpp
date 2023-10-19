#include<iostream>
using namespace std;
#define MAX 100

class deque{
    int arr[MAX];
    int front;
    int back;
    int size;
    public:
    deque(int size){
      front=-1;
      rear = 0;
      this->size=size;
    }

    void insertfront(int key);
    void insertrear(int key);
    void deletefront();
    void deleterear();
    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();
};

bool deque::isFull(){
    return ((front))
}
int main(){

    return 0;
}