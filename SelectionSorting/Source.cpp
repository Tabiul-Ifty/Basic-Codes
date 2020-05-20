#include<iostream>
using namespace std;

void arraysort(int arr[], int siz)
{
	int t,m;
	for (int i = 0; i < siz; i++)
	{
		m = i;
		for (int j = i+1; j < siz; j++)
		{
			if (arr[j]<arr[m])
			{
				m = j;
			}
		}
		t = arr[i];
		arr[i] =arr[ m];
		arr[m] = t;
	}
}
void arrayprint(int arr[], int siz)
{
	for (int i = 0; i < siz; i++)
	{
		cout << arr[i]<< "," ;
	}
	cout << endl;
}
int main()
{
	int arr[9] = { 3,4,1,10,8,6,7,9,11 };
	arrayprint(arr, 9);
	cout << endl;
	arraysort(arr, 9);
	arrayprint(arr, 9);


	system("pause");

}