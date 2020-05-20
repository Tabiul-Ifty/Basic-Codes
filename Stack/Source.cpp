#include<iostream>
using namespace std;
#define z 100
int stack[z];
int top = -1;

void push(int value)
{
	//top++;
	if (top == 9)
	{
		cout << "stack is full" << endl;
	}
	else
	{
		stack[++top] = value;  //pre_increment ;
	}
}

void pop()
{
	if (top == -1)
	{
		cout << "stack is empty" << endl;
	}
	else
		//stack[top--] = NULL;
		top--;  // not assigning NuLL;
}

bool isEmpty()
{
	if (top == -1)
	{
		cout << " Stack is empty" << endl;
		return true;
	}
	else
	{
		cout << "Not empty" << endl;
		return false;
	}
}


void PrintAll()
{
	for (int i = 0; i <= top; i++)
	{
		cout << stack[i] << endl;
		
	}
	

}
int main()
{
	push(5);
	push(60);
	push(4);
	push(50);
	pop();
	isEmpty();
	PrintAll();

	system("pause");

}