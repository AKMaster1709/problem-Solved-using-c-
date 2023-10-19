// Abhishek Jain
// 0101CS211005
#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,rem;
    cout<<"enter a number"<<endl;
    cin>>n;
    
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<"reversed number: "<<rev<<endl;
    
    return 0;
}