#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1 || n==0)
    { return 1;}
    int tmp=n*factorial(n-1);
    return tmp;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}