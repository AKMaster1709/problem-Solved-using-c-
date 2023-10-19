// Abhishek Jain
// 0101CS211005
#include <iostream>  
using namespace std;  
int main()  
{  
 char ch='A';    
    int i, j, k, m,p; 
    cout<<"enter a digit"<<endl;
    cin>>p;   
    for(i=1;i<=p;i++)    
    {    
        for(j=p;j>=i;j--)    
            cout<<" ";    
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch--;    
        for(m=1;m<i;m++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }    
return 0;  
}  