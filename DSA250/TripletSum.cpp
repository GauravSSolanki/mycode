#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>

using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int dep[N];
    for (int i = 0; i < N; i++)
    {
        cin >> dep[i];
    }

    int i = 0;
    int j = 0;
    int count = 0;
    int maxplatform = 0;

    sort(arr, arr + N);
    sort(dep, dep + N);

    while (i < N || j < N)
    {
        if (arr[i] <= dep[j])
        {
            count++;
            cout << arr[i] << endl;
            i++;
            if (maxplatform < count)
            {
                maxplatform = count;
            }
        }
        else
        {
            j++;
            count--;
        }
    }

    cout << maxplatform << endl;
}