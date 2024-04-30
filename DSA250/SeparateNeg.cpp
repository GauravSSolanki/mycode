#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>

using namespace std;
int main()
{
    long n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    queue<int> qut;
    queue<int> qut2;

    int i = 0;
    long posPtr = 0;

    // Traverse through the array
    for (long i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            qut.push(arr[i]);
            posPtr++;
        }
        else
        {
            qut2.push(arr[i]);
        }
    }

    while (i < posPtr)
    {
        arr[i] = qut.front();
        qut.pop();
        i++;
    }
   
    while (i < n)
    {
        arr[i] = qut2.front();
        qut2.pop();
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}