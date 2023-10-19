//abhishek jain
// 0101CS211005
#include<iostream>
using namespace std;
int main()
{
    int n,num,digit,rev = 0;
    cout<<"enter a positive number:"<<endl;
    cin>>num;
    n = num;
    do
    {
        digit = num%10;
        rev = (rev*10)+digit;
        num = num/10;
    }while (num != 0);
    if (n == rev)
    {
        cout<< " The number is palindrome"<<endl;
    }
    else
    {
        cout<<"The number is not palindrome"<<endl;
    }
    return 0;
}