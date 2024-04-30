#include <bits/stdc++.h>
#include <algorithm>
#include <stdio.h>

using namespace std;
int main()
{
    long n;
    long flag = 0;
    cin >> n;
    long index[100000] = {0};

    long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        index[arr[i]] = 1;
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (index [ arr[i] + arr[j] ] == 1)
            {
                cout<<"In Loop";
                flag++;
                cout << arr[i] << "+" << arr[j] << "=" << arr[i]+arr[j] << endl;
            }
        }
    }
    cout << flag;
}