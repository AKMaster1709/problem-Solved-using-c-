#include <iostream>
using namespace std;

int fibonnaci(int n){
    
    if(n==0 || n==1){
        return n;
    }
    return fibonnaci(n-1) + fibonnaci(n-2);
}

int main(){
     int n;
     cin>>n;

     cout<<fibonnaci(n)<<endl;
     return 0;
}