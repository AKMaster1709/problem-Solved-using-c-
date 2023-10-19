// Abhishek jain
// 0101CS211005
#include <iostream>
using namespace std;

int main()
{
    int n;
    long double factorial = 1.0;

    cout << "enter a number :";
    cin>>n;
if (n < 1){
    cout<<"factorial of negative number does not exist";
}
else {
    for (int i = 1;i <= n; i++)
    {
     factorial *= i;

    }
    cout<<"factorial of  "<<n<<'='<<factorial<<endl;
}
    return 0;
}