#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int fact(int n){
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int factorial(int n,int m){
    return fact(n)/fact(m);
}

vector<int> getRow(int rowIndex) {
       vector<int> ans;
       for(int i=0;i<rowIndex;i++){
         ans[i]= factorial(rowIndex -1,i);
       }        
       return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr = getRow(n);
    copy(arr.begin(), arr.end(),
         std::ostream_iterator<int>(cout," | "));
    cout << endl;
    return 0;
}