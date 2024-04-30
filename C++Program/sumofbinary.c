#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,x;
	int sum=1,i=1,j=1,t;
	
	printf(" Enter x : ");
	scanf("%d", &x);
	printf("Enter n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    { t=1 ;
	 	{  for(j=1;j<i+1;j++)
	        t=t*x ;
	    }
      	sum=sum+t;
    }
    printf("%d",sum);
	
}
