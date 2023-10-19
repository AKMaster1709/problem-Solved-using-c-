#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={3,6,8,6,4,6};
    int k=arr[0];
    for(int i=0;i<6;i++){
        k = max(k,arr[i]);
    }

    cout<<k<<" "<<endl;
    return 0;
}