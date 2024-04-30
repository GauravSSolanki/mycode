#include <bits/stdc++.h>
#include <algorithm>
#include <stdio.h>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    int res[n];

    int end = n - 1;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int M = arr[n - 1] + 1;

    copy(arr, arr + n, res);

    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            int max = res[end--];
            arr[i] = arr[i] + ((max % M) * M);
        }
        else
        {
            int min = res[start++];
            arr[i] = arr[i] + ((min % M) * M);
        }
        arr[i] = arr[i] / M;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}