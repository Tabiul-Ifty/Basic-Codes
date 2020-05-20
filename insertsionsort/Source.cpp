#include<iostream>
using namespace std;

/*void insert_sorting(int a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1])
			for (j = i + 1; j <= 0; j--)
			{
				j = 0;
				if (a[j] < a[j + 1])
				{
					int t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
			}
	}
}*/
void insert_sorting(int a[], int n)
{
	int hole, i, value;

	for (i = 1; i < n ; i++)
	{
		value = a[i];
		hole = i;
		while (hole > 0 && a[hole - 1] > value)
		{
			a[hole] = a[hole - 1];
			hole = hole - 1;
		}
		a[hole] = value;
	}
}

void printarray(int arr[],int n)
{
	int i; 
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
}

int main()
{
	/*int a[10];
	int i, n;
	cout << "Enter element Number:";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}*/

	int a[6] = { 9,6,5,3,8,1 };
	printarray(a, 6);

	insert_sorting(a, 6);
	cout << "After sorting" << endl;
	printarray(a, 6);

	//system("pause");
}