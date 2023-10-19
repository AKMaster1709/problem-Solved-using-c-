#include <iostream>
using namespace std;
class circle
{
    float radius,area;
public:
   void setRadius(int r)
    {
        radius = r;
    }
    void calculateArea()
    {
        area = 3.14*radius*radius;
    }
    void display()
    {
        cout<<"Area of circle = "<<area;
    }
};
int main(){
    circle c1;
    int r;
    cin>>r;
    c1.setRadius(r);
    c1.calculateArea();
    c1.display();
    return 0;
}