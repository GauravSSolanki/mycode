#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a[6] = {2, 3, 3, 9, 4, 5}, i, temp = 0, j;
	for (i = 0; i < 6; i++)
	{
		for (j = i + 1; j < 6; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < 6; i++)
	{
		cout<<a[i]<<" ";
	}
}
