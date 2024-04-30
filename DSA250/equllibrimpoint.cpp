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
    long posPtr = 0;
    int leftsum = 0;
    int rightsum=0;
    // Traverse through the array
    for (long i = 0; i < n; ++i)
    {
        rightsum += arr[i];
    }
    int i=0;
    while( i<n)
    {
        rightsum-=arr[i];

       
        if(leftsum==rightsum)
        {
            posPtr=i+1;
            break;
        }
          leftsum+=arr[i];
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl<<posPtr<< " "<<"value:" <<arr[posPtr-1];
}