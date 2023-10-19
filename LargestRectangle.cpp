#include<bits/stdc++.h>
using namespace std;

 vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        st.push(-1);
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
           int curr = prices[i];
           while(st.top() >= curr){
               st.pop();
           }
           ans[i] = st.top();
           st.push(curr);
        }
        return ans;
    }

int main(){
    vector<int> arr= {8,4,6,2,3};
     cout<<finalPrices(arr);
    return 0;
}