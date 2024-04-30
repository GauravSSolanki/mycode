#include<stdio.h>
int main()
{   
 long int N,i=0,j=0,k=0,l=0 ;
     printf("Enter number");
	 scanf("%ld",&N);
	 for(i=10;i<=N;i++)
	   {  
	       k=0 ;
	   for(j=1;j<=i;j++) 
	       {
		     if(i%j==0)
	          {
		      k++;
	          }
	       }
       if(k==9)
          {
	      l++;
	      }
	   } 
	   printf("%ld",l);
}
