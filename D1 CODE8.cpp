#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
	int p;
	int max = arr[0];

	for (p = 1; p < n; p++)
		if (arr[p] > max)
			max = arr[p];

	return max;
}

int main()
{
	int arr[] = { 110, 34, 4, 70, 98 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << "Largest in given array is " << largest(arr, n);
	return 0;
}


