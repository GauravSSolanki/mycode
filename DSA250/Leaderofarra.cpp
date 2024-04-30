#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>

using namespace std;
int main()
{
    long n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = n - 1;
    int j = 0;
    while (k >= 0)
    { 
        if (arr[k] == arr[n - 1] && k==n-1)
        {
            arr2[j] = arr[k];
            j++;
        }
       
        if(arr[k] > arr2[j - 1])
        {
            arr2[j] = arr[k];
            j++;
        }
        k--;
        
    }

    for (int i = j-1; i>=0; i--)
    {
        cout << arr2[i] << " ";
    }
}