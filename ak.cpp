#include <iostream>
using namespace std;

void change(int data)
{
    data=5;
}
int main(int, const char**) {

    int data=3;
    change(data);
    cout <<"value of the data is:"<< data<<endl;

    return 0;
}
