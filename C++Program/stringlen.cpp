#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int arr[n + 1];
  cout << "enter string length" << endl;
  cin >> n;
  int i = 0, currlen = 0, maxlen = 0;
  //   cout<<"enter arr"<<endl;
  for (i = 0; i <= n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i <= n; i++)
  {
    cout << arr[i];
  }
  cout << endl;

  while (i <= n)
  {
    if (arr[i] == '0' || arr[i] == '\0')
    {
      if (currlen >= maxlen)
        maxlen = currlen;
      currlen = 0;
    }

    else

        if (arr[i] == '\0')
    {
      break;
    }

    currlen++;
    i++;
  }

  cout << maxlen;
}

// prcticed with code 

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string str;
//   int max = 0;
//   int curr = 0;
//   getline(cin, str);
//   int n = str.length();
//   for (int i = 0; i <= n; i++)
//   {
//     if (str[i] == ' ' || str[i] == '\0')
//     {
//       if (max < curr)
//       {
//         max = curr;
//       }
//       curr = 0;
//     }
//     else
//     {
//       curr++;
//     }
//   }
//   cout << str;
//   cout << max << " ";
//   cout << curr;
// }