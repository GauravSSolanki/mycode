#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <conio.h>
using namespace std;

int sorting(int arr[], int n)
{
	int temp = 1, j;
	for (int i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}

int bisearch(int arr[], int kw, int n)
{
	int s = 0, e = n - 1, mid = 1;
	while (s <= e)
	{
		mid = (s + e) / 2;
		if (arr[mid] == kw)
		{
			return mid;
		}
		else if (arr[mid] > kw)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
}
int main()
{
	int kw, n;
	cout << "enter size of aar : " << endl;
	cin >> n;
	cout << "enter keyword " << endl;
	cin >> kw;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cout << "enter [" << i + 1 << "]";
		cin >> arr[i];
	}
	sorting(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "index is : " << bisearch(arr, kw, n);
}
