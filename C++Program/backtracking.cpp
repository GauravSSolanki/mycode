#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std ;
 void solve(int i,int j,int n,int arr[] ,string ans ,int vis[] )
 {
 	if(i==n-1 && j==n-1 )
 	{ cout<<ans ;
 	return;
 	}
 	//downward
 	if(i+1<n && !vis[i+1][j] && arr[i+1][j]==1)
 	{  vis[i][j]=1;
 	  solve(i+1,j,arr,move+'D',vis) ;
 	  vis[i][j] =0;
	 }
	 //left
	 if(j-1>=0 && !vis[i] [j-1] && arr[i][j-1]==1)
 	{  vis[i][j]=1;
 	  solve(i,j-1,arr,move+'L',vis) ;
 	  vis[i][j] =0;
    }
	//right
	if(j+1<n && !vis[i][j+1] && arr[i][j+1]==1)
 	{  vis[i][j]=1;
 	  solve(i,j+1,arr,move+'R',vis) ;
 	  vis[i][j] =0;
    }
    //upward
    if(i-1>=0 && !vis[i+1][j] && arr[i+1][j]==1)
 	{  vis[i][j]=1;
 	  solve(i-1,j,arr,move+'U',vis) ;
 	  vis[i][j] =0;
    }
    cout<<ans ;
 }
int main()
{  int n ;
cin>>n ; 
  int arr[n][n] ;
    string ans = "move ";
    int i=0 ;
    int j=0;
    int vis[n]n] ;
    for(i=0;i<=n;i++)
     {
     	for(j=0;j<=n;j++)
     	  {
		   cout<<"arr[i][j]";
		   cin>>arr[i][j]; 
		  }cout<<endl;
	 }
	 solve(i,j,n,arr[],ans,vis[]) ;
}
