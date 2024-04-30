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
    int i, j, flag = 0;

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
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (pow(arr1[i], arr2[j]) > pow(arr2[j], arr1[i]))
            {

                flag++;
                cout << arr1[i] << " " << arr2[j] << " "<<endl;
            }
        }
    }
    cout << flag;
}

//input
// 3 
// 2
// 2 1 6
// 1 5
// output 
// 2 1 
// 2 5 
// 6 1 
// 3