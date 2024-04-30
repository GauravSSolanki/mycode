#include<stdio.h>
int main()
{
	int i,k=0;
	int b[5],m;
	for(i=0;i<5;i++)
     { 
		printf("enter  element");
	scanf("%d\n",b[i]); }    
	if(m==0)
	{ printf("no clothes");
	}
	else 
	{ 
	  for(i=0;i<5;i++)
	  { 
	  if(b[i]%2==1)
	  {
	   printf("%d",b[i]);
	  }
	  else 
	  	{
	  		k++;
		}
	  }
	  if(k==0)
	   {
		   printf("zero even");
	   }
	}
}

