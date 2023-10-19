// Abhishek Jain
// 0101CS211005
#include<iostream>
using namespace std;

int main(){
    int n,r,s=0,t;
    cout<<"Enter a number"<<endl;
    cin>>n;

    while(n>0){
        r=n%10;
        n=n/10;
    s=(s*10)+r;
    }
    
    while(s>0){
        t=s%10;
        s=s/10;
        if(t==0){
            cout<<"zero"<<" ";
        }
        if(t==1){
            cout<<"one"<<" ";
        }
        if(t==2){
            cout<<"two"<<" ";
        }
        if(t==3){
            cout<<"three"<<" ";
        }
        if(t==4){
            cout<<"four"<<" ";
        }
        if(t==5){
            cout<<"five"<<" ";
        }
        if(t==6){
            cout<<"six"<<" ";
        }
        if(t==7){
            cout<<"seven"<<" ";
        }
        if(t==8){
            cout<<"eight"<<" ";
        }
        if(t==9){
            cout<<"nine"<<" ";
        }
        
    }
    return 0;
}