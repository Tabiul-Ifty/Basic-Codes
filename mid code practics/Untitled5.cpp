#include<iostream>
using namespace std;
class AX
{
    int ant;
public:
    AX()
    {
        cout<< "Default"<<endl;
        ant=0;
    }
    AX(int y)
    {
        ant=y;
    }

 void setValues(int y)
    {
        ant=y;
    }
    void getValues()
    {
        cout<< "Enter Ant: "<<ant<<endl;
    }

};
int main ()
{
    AX a1(5), a2;
    a1.getValues();

    a2.getValues();

}
