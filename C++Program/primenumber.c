#include<stdio.h>
#include<conio.h>
int main()
{ int n=0 ,i=1,j=2,k=0;
  printf("Enter number ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { for(j=2;j<=i;j++)
     {
        	if(i%j==0 && i==j)
       {
        	printf("%d\n " ,i);
        	k++ ;
	   }
	 }
	 
  }
  printf(" total prime : %d", k);

}

