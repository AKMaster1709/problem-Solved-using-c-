#include <iostream>
using namespace std;

int main(){
    cout<<"Size of array :"<<endl;
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the number at  "<<i<<" index"<<endl;
        cin>>arr[i];
    }
     for(int i=1;i<n;i++){
         int current = arr[i];
         int j= i-1;
         while(arr[j]>current && j>=0){
           arr[j+1] = arr[j];
           j--;
         }
         arr[j+1] = current;
         
     }

      cout<<"Array in Ascending order"<<endl;
     for(int i=0;i<n;i++){
         cout<<arr[i]<<' ';
          }
    return 0;
}