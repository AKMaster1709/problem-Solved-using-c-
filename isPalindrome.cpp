#include<iostream>
using namespace std;

bool isPalindrome(string s) {
        if(s.length()==0){
            return true;
        }
        
        for(int i=0;i<s.length();i++){
            if(s[i]=' '){
                s.erase(i);
            }
        }
        int n = s.length();
        int mid = n/2;
        for(int i=0;i<mid;i++){
            for(int j=n;j<mid;j++){
                if(s[i]==s[j]){
                    return true;
                }
                
            }
        }
        return false;
    }

    int main(){
        string s;
        getline(cin,s);
        if(isPalindrome(s)){
            cout<<"true";
        }else{
            cout<<"false";
        }
        
        return 0;
    }