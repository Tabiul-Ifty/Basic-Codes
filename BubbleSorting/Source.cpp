#include<iostream>
using namespace std;
#define size 10;
int arr[10] = { 10,8,3,5,2,6,72,56,66,1 };

void BubbleShot(int a[],int n)
{
	int i, j,temp;
	for (i = 0; i < n ; i++)
	{
		for (j = i+1; j < n ; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			cout << a[i];
		}
	}
}
void printArray(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ",";
	}
	cout << endl << endl;
}

int main()
{
	printArray(arr, 10);

	cout << "After Sorting The Array: " << endl;

	BubbleShot(arr, 10);

	printArray(arr, 10);

	system("pause");

}