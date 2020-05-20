#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int quiz1,quiz2,quiz3;
    string name;
    int id;
    double avg;


public:

    static int Count;
    Student()
    {
        cout<<"object created ."<<endl;
        quiz1=0;
        quiz2=0;
        quiz3=0;
        Count++;


    }
    Student(int a,int b,int c)
    {

        quiz1=a;
        quiz2=b;
        quiz3=c;
    }

    void assingvalues(int p, int q, int r, string n, int ID)
    {
        quiz1=p;
        quiz2=q;
        quiz3=r;
        name=n;
        id=ID;

    }

     void average(int x,int y,int z)
    {

       int k=x+y+z;


        avg=(float)k/3;
        //cout<<"Average mark is : "<<avg<<endl;

    }
     void showsvalues()
    {
        cout<<"Quiz1 :"<<quiz1<<endl;
        cout<<"Quiz2 :"<<quiz2<<endl;
        cout<<"Quiz3 :"<<quiz3<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"ID :"<<id<<endl;
        cout<< "Avarege :"<<avg<<endl;

    }
     void showcount()
    {
        cout<<"Total object is  :"<<Count<<endl;
    }

    ~Student()
    {
        cout<< "Destroyed"<<endl;
    }

};
int Student::Count=0;


int main()
{
    Student s[2];
    int I,a,b,c,i;
    string nm;

    for(i=0;i<2;i++)
    {
        cout<< "Enter ID :"<<endl;
        cin>>I;
        cout<< "Enter Name: "<<endl;
        cin.ignore();
        getline(cin,nm);
        cout<< "Enter Quiz1 :"<<endl;
        cin>>a;
        cout<< "Enter Quiz2 :"<<endl;
        cin>>b;
        cout<< "Enter Quiz3 :"<<endl;
        cin>>c;
        s[i].assingvalues(a,b,c,nm,I);
        s[i].average(a,b,c);
    }
    for(i=0;i<2;i++)
    {
        s[i].showsvalues();
    }
    s[i].showcount();
    //cout<< "Numbers of OBJECTS: "<<Student::Count<<endl;

}

