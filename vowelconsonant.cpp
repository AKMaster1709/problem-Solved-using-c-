#include <iostream>
using namespace std;

int main()
{
    char ch1;
    cout<<"enter character"<<endl;
    cin>>ch1;

    switch (ch1)
    {
        case 'a':
        cout<<"it is vowel"<<endl;
        break;
        case 'e':
        cout<<"it is vowel"<<endl;
        break;
         case 'i':
        cout<<"it is vowel"<<endl;
        break;
         case 'o':
        cout<<"it is vowel"<<endl;
        break;
         case 'u':
        cout<<"it is vowel"<<endl;
        break;
       
    default:
    cout<<"it is a consonant "<<endl;
        break;
    }
    return 0;
}