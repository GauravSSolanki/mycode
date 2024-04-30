#include <bits/stdc++.h>
#include <algorithm>
#include <stdio.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Gmax = arr[0];
    int Lmax = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > (arr[i] + Lmax)) // 4 , 6 ,6 ,6 // 5 ,11 ,11 ,11 // 1 ,12 ,12 , 12
        {
            Lmax = arr[i];
        }
        else
        {
            Lmax = Lmax + arr[i];
            Gmax = max(Lmax, Gmax);
        }
    }
    cout << Gmax << " " << Lmax;
}
// 6
// 3 2 -2 5 -4 1
// output = 8 5  