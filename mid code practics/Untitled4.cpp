#include <iostream>
using namespace std;

class Rectangle
{
    float height,width;
    int breadth;
public:
    Rectangle();
    ~Rectangle()
    {
       cout<<"Destroyed..."<<endl;
    }
    Rectangle(float h, float w, int b)
    {
        cout<<"Parameterized Constructor"<<endl;
        height=h;
        width=w;
        breadth=b;
    }

    void setValues(float h,float w, int b)
    {
        height=h;
        width=w;
        breadth=b;
    }
    void getValues()
    {
        cout<<"Height= "<<height<<endl;
        cout<<"Width= "<<width<<endl;
        cout<<"Breadth= "<<breadth<<endl;
    }
};

Rectangle::Rectangle()
{
    cout<<"Default Constructor"<<endl;
        height=0;
        width=0;
        breadth=0;
}

int main()
{
  Rectangle *r1= new Rectangle;
  Rectangle *r2= new Rectangle(4.6,3.6,8);
  r2-> getValues();
  r1-> getValues();
  delete r1;
  delete r2;
}
