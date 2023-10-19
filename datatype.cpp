#include <iostream>
using namespace std;

int main(int argc, const char** argv) {
    int age;
    char name[30];
    cout<<"enter the name"<<endl;
    cin>>name;

    cout<<"enter the age"<<endl;
    cin>>age;
    cout<<name<<endl;
    cout<<age<<endl;
    if (age>=18)
    {
        cout<<name<<" is eligible for vaccination";
    }
    else
    {
        cout<<name<<" is not eligible for vaccination";
    }

    return 0;
}
    