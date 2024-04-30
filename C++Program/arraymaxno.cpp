#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
int main()
{  char B[10] = {'a','b','h'} ; 
   int a[6]={10,2,8,8,9,17} , i=0 ;
   int maxno=a[1] ;
   for(i=0;i<6;i++)
   {
      maxno = max(maxno , a[i] ) ;
   }
   cout<<"maximum number in array "<<maxno<<endl;
    int minino=a[5] ;
   
    for(i=0;i<6;i++)
   {
      minino = min(minino , a[i] ) ;
   }
   cout<<"minimum number in array "<<minino;
    int s = B.size() ;
   cout<<s ;
}
