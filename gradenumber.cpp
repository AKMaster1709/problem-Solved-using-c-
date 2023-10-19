// Abhishek Jain
// 0101CS211005
#include<iostream>
using namespace std;
int main()
{
    int number;
    char grade;
    cout<<"enter number "<<endl;
    cin>>number;

    if(number<0 || number>100)
    {
        cout<< "invalid number"<<endl;
        return 0;
    }
    switch(number/10)
    {
        case 10:
        case 9:
        grade = 'A';
        break;
        case 8:
        grade = 'B';
        break;
        case 7:
        grade = 'D';
        break;
        case 5:
        grade = 'E';
        break;
        default:
        grade = 'F';
    }
    cout<<"grade = "<<grade<<endl;
    return 0;
}