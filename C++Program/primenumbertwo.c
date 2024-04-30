#include<stdio.h>
#include<conio.h>
int main()
{ int n=0 ,i=1,j=2,k=0,d=0,p=1,number[1000];
  printf("Enter number ");
  scanf("%d",&n);
 
   for(i=2;i<=n;i++)
  {   k=0;
     for(j=2;j<=i;j++)
      {
         	if(i%j==0)
               {
         	       k++ ;
	           } 
	  }
   
	 if(k==1)
	    
		{
	     number[p]=i;
	     p++ ;
	     d++ ;
	    } 
  }
  for(p=1;p>=1000;p++)
    {
	  printf("  prime : %d",number[p]);
    }
}

