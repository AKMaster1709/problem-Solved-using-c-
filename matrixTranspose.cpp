#include <iostream>
using namespace std;

int main() {

   int N = 3;
   int arr[N][N]= { {2,3,5},{3,8,9},{3,6,8}};
   
   for(int i=0;i<N;i++){
       for(int j=i;j<N;j++){
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] =temp;

       }
   }

   for(int i=0;i<N;i++){
       for(int j=0;j<N;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<"\n";
   }
   ;
    return 0;
}