#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <conio.h>
using namespace std;

vector<int> fact(int n)
{
  vector<int> vt;
  vt.push_back(1);
  for (int i = 2; i <= n; i++)
  {
    int carry = 0;
    for (int j = vt.size() - 1; j >= 0; j--)
    {
      int tmp = vt[j] * i + carry;
      vt[j] = tmp % 10;
      carry = tmp / 10;
    }
    while (carry != 0)
    {
      vt.insert(vt.begin(), carry % 10);
      carry /= 10;
    }
  }
  return vt;
}

int main()
{
  int n;
  cin >> n;
  vector<int> vt = fact(n);
  for (int i = 0; i < vt.size(); i++)
  {
    cout << vt[i] << "";
  }
}
