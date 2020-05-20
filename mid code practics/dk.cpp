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
}

int main()
{
  int a=5;
  Rectangle r1,r2,r3;
  cout<<"Hello.. How are you?"<<endl;
  if(a<10)
  {
      Rectangle r4;
  }
  cout<<"Study Hard.."<<endl;
}
