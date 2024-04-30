#include<stdio.h>
#include<string.h>
void main()
{  char s1[20],s2[20],x[40],y[50],z[30];
  printf("Enter first string ");
  scanf("%s",&s1);
  printf(" Enter sec string");
  scanf("%s",&s2);
  strcpy(s1,s2);
  strcpy(s2,s1);
  strncat(s1,s2,4);
  toupper(s1);
  printf("%s",toupper(s1));
  printf("%s\n%s\n%s\n done", strcpy(s1,s2),strcpy(s2,s1),strncat(s1,s2,4) );
}
