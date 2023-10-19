#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
            if(arr[i]!=arr[i+1]){
                
            }
        }
    }
    

    return 0;
}