#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
