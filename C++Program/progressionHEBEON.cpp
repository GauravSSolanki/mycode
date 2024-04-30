#include<stdio.h>
int main()
{  
int a,b ,d,s=0,i,j,k,n=0,l;
	printf("Enter first digit a ");
	scanf("%d",&a);
	printf(" Enter s digit  b ");
	scanf("%d",&b);
	  k=a;
	  j=b;
	  
	if(a>b)
	{
		k=b;
		j=a;
    }
    i=k;
    n=k;
    while(n>=1)
    { if(n%2==0)
         {
		   n=n/2;
		   s++;
		   printf("%d ", n);
        }
        else
        { 
        n=3*(n+1) ;
        printf("%d ",n);
        s++ ;
		}
		i++ ;
	}
    printf("k :%d ,s:%d ,j : %d ",k,s,j);
}
