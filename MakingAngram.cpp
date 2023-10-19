#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;

    int c1[26]={0},c[26]={};

    for(int i=0;i<a.length();i++){
        if(97<=a[i] && a[i]<=123){
           c1[a[i]-97]++;
        }
    }
    for(int i=0;i<b.length();i++){
        if(97<=b[i] && b[i]<=123){
            c[b[i]-97]++;
        }
    }
    int s=0;
    for(int i=0;i<26;i++){
        s= s+abs(c[i] - c1[i]);
    }
    cout<<s<<endl;
    return 0;
}