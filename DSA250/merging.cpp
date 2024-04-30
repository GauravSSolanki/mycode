#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;
    int i, j;

    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    i = 0;
    j = m - 1;

    while (i < n && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            int tmp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = tmp;
            i++;
        }
        j--;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
}