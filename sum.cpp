// Abhishek Jain
// Roll No. 0101CS211005

#include <iostream>
using namespace std;

int main()
{
   int number=0,sum=0;

    cout << "\t Find the sum of the first 100 Natural Numbers "<<endl;
    
    for (number =1; number <=100; number++)
    {
        sum+=number;
    }
    cout << sum << endl;
    return 0;
}