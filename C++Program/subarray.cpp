#include <bits/stdc++.h>
#include <algorithm>
#include <stdio.h>

using namespace std;
int main()
{
    int n;
    int sum = 0;
    int flag = 0, start = 0;
    cin >> n;
    int SUM;
    cin >> SUM;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        if (sum >= SUM)
        {
            if (sum > SUM)
            {
                while (sum > SUM)
                {
                    sum = sum - arr[start];
                    start++;
                    if (sum == SUM)
                    {
                        flag++; // 1 ,
                        cout<<start+1<<" "<<i+1<<endl ;
                        break;
                    }
                }
            }
            else{
                flag=1;
            }
        }
    }

    if (flag > 0)
    {
        cout << flag << " ";
    }
    else
    {
        cout << -1 << " ";
    }
}