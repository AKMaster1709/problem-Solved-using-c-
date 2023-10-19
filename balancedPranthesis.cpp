#include<iostream>
#include<stack>
using namespace std;
isValid(string s){
     stack<char> st;
     bool ans = true;
     for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }else if (s[i]==')')
        {
            if(st.top()=='('){
               st.pop();
            }else{
               ans = false;
               break;
            }
        }
        else if (s[i]=='}')
        {
            if(st.top()=='{'){
               st.pop();
            }else{
               ans = false;
               break;
            }
        }
        else if (s[i]==']')
        {
            if(st.top()=='['){
               st.pop();
            }else{
               ans = false;
               break;
            }
        }
     }
     return ans;
}

 int main() {
    string s;
    cin>>s;
    if(isValid(s)){
        cout<<"Valid paranthesis"<<endl;
    }else{
        cout<<"Invalid paranthesis"<<endl;
    }
    return 0;
}