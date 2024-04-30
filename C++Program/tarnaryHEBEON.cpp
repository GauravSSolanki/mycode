#include<stdio.h>
int main()
{ int mod ,v ;
  printf(" enter value :");
  scanf("%d",&v);
  view :
  if(v< 0)
  {
   printf(" n valid :");
  }
  else if(v>=0)
  { int mod;
  	mod=v%3 ;
  	v=v/3 ; 
  	printf("%d",mod);
  	goto view ;
  }
}
