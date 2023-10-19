#include <iostream>
using namespace std;
void Hanoi(int n,char start,char end,char helper){
    if(n==0){
        return;
    }
    Hanoi(n-1,start,helper,end);
    cout<<"move from "<<start<<" to "<<end<<endl;
    Hanoi(n-1,helper,end,start);
}
int main(){
    int n;
    cout<<"Enter the number of Disc: ";
    cin>>n;
    Hanoi(n,'A','C','B');
    return 0;
}