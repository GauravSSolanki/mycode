#include <bits/stdc++.h>
#include <algorithm>
#include <stdio.h>
#include <cmath>

using namespace std;
void swaping(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int end = n - 1;
    int start = 0;
    int mid = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (mid <= end)
    {

        if (arr[mid] == 0)
        {
            // swap(arr[start], arr[mid]);
            swaping(&arr[start], &arr[mid]);
            mid++;
            start++;
        }
        else if (arr[mid] == 2)
        {
            // swap(arr[mid], arr[end]);
            swaping(&arr[mid], &arr[end]);
            end--;
        }
        else
        {
            mid++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}