#include<iostream>
using namespace std;
int main(){
string s;
    cin>>s;
    int mid=s.length()/2;
    int A=0;
    int diff;
    int len =  s.length();
    for(int i=0;i<mid;i++){
       diff=abs(s.at(i)-s.at(len-i-1));
       A+=diff;
    }
    cout<<A<<endl;
    return 0;
}