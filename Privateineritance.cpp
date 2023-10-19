// Abhishek Jain
// 0101CS211005
#include <iostream>
using namespace std;
class A
{
    private:
    int a;
    protected:
    int x;
    public:
    void setVal(int v)
    {
        x=v;
    }
};
class B:private A
{
    public:
    void printVal(void)
    {
        setVal(10);
        cout<<"value of x:"<<x<<endl;
    }
};
int main()
{
    B objB;
    objB.printVal();
    return 0;
}