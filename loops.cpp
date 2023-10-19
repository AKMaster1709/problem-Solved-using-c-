#include <iostream>
using namespace std;

int main(int argc, const char** argv) {

    int n;
    cout<<"enter a number: ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}