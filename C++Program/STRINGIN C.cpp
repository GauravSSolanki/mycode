#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// char s[13] = { 'h', 'e', 'b', 'e', 'o', 'n' };
	string s ;
	getline(cin , s);
	int n = s.length();
	int len = 0;
	for (int i = 0; i<=n ; i++)
	{
		if( s[i] ==' ' )
		{
			break;
		}len++;
		
	}
  cout<<len;
}
