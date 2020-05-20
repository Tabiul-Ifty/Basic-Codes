#include<iostream>
using namespace std;
int  main()
{
	int arr[] = { 1,3,5,9,6 };
	
	int i = 0, k = 3,n=5,j;
	

	for (i = 0; i < n; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;

	
	j = k;

	while (j < n)
	{
		arr[j - 1] = arr[j];
		j = j + 1;
	}

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;


	system("pause");
}