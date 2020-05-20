#include<iostream>
using namespace std;
//MULTILeVeL

class Box
{
protected:
	int height, width;
public:
	 static int c;
	Box()
	{
		cout << "Box default" << endl;
		c++;
	}
	Box(int h, int w)
	{
		cout << "Box parameterized" << endl;
		height = h;
		width = w;
		c++;
	}
	~Box()
	{
		cout << "Box Destroyed" << endl;
	}
};

class Square : virtual public Box
{
	int a, b;
public:
	static int co;
	Square()
	{
		cout << "Square Default" << endl;
		co++;
	}
	Square(int c, int d)
	{
		cout << "Square Parameterized" << endl;
		a = c;
		b = d;
		co++;
	}
	~Square()
	{
		cout << "Square Destroyed" << endl;
	}
};

class Rectangle : virtual public Box
{
	int breadth;
public:
	static int c;
	Rectangle()
	{
		cout << "Rectangle Default" << endl;
		c++;
	}
	Rectangle(int b)
	{
		cout << "Rectangle parameterized" << endl;
		breadth = b;
		c++;
	}
	void volume()
	{
		cout << "Volume:" << height * width*breadth << endl;
	}

};

class Circle : public Rectangle, public Square
{
	int radious;

public: 
	static int c;
	Circle()
	{
		cout << "Circle default" << endl;
		c++;
	}
	Circle(int r) :Square(3, 4),Rectangle(6),Box(5,7)
	{
		cout << "Circle Parameterized" << endl;
		radious = r;
		c++;
	}
};

int Box::c ;
int Square::co ;
int Rectangle::c ;
int Circle::c ;

int main()
{
	Circle c1(7);
	cout << "Total For Box: " << Box::c << endl;
	cout << "Total For Square: " << Square::co << endl;
	cout << "Total For Rectangle: " << Rectangle::c << endl;
	cout << "Total For Circle: " << Circle::c << endl;
	system("pause");
}