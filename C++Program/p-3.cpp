#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	 
     for(int i=1;i<=7;i++)
     {
        for(int j=1;j<=5;j++)
        {
            if(i==1 || i==7)
            {
                cout<<"*";
            } 
            else if(j==1 || j==5){
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
           
        } cout<<endl;
     }

    //   for(int i=1;i<=7;i++)
    //  {
    //     for(int j=1;j<=5;j++)
    //     {
    //         while()
           
    //     } cout<<endl;
    //  }
}