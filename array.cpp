#include<iostream>
using namespace std;
int main(){
    int n,m; //number of row and column
    cout<<"Enter the size of array : "<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>arr[i][j];
        }
    }
    cout<<"Elements of given array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}