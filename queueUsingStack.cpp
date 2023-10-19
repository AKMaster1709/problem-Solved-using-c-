#include<iostream>
#include<stack>
using namespace std;
 
 //pop costly method
 class queue{
   stack<int> s1;
   stack<int> s2;
   
   public:
   int deQueue(int x){
      if(!s2.empty()){
        cout<<"queue is empty"<<endl;
        return -1;
      }
      if(s2.empty()){
      while(!s1.empty()){
          s2.push(s1.top());
          s1.pop();
      }
      int topVal = s2.top();
      s2.pop();
      return topVal;
      }
   }
   void enQueue(int x){
    s1.push(x);
   }
   
   bool empty(){
    if(s1.empty())
      return true;
      return false;
   }
 };
int main(){

    queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    
    return 0;
}