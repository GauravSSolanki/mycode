#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	// your code goes here
	long N;
	cin>>N;
	long arr[N];
	int sum=0;
	int max=arr[N-1];
	for(long i=0;i<N;i++)
	{
	 cin>>arr[i];   
	}
	sort(arr,arr+N);
    
	for(long i=0;i<N;i++)
	{
	     sum=arr[i]*(N-i) ;
        //  cout<<sum;
	    if( sum>=max )
	    {
            max=sum;
            // cout<<max;
            
	    }
	}
    cout<<max;


}