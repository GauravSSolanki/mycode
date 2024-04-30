#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <conio.h>
using namespace std;

void countsorting(int arr[], int n)
{

  int k = arr[0], i;
  for (i = 1; i < n; i++)
  {
    k = max(k, arr[i]);
  }
  cout << k << endl;
  int count[k + 1] = {0};
  for (i = 0; i < n; i++)
  {
    count[arr[i]]++;
  }
  for (i = 1; i <= k; i++)
  {
    count[i] += count[i - 1];
  }
  int output[n];
  for (i = n - 1; i >= 0; i--)
  {
    output[--count[arr[i]]] = arr[i];
  }
  for (i = 0; i < n; i++)
  {
    arr[i] = output[i];
    cout << arr[i] << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "enter [" << i + 1 << "]\t";
    cin >> arr[i];
  }
  countsorting(arr, n);
}
