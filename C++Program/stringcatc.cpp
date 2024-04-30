#include<stdio.h>
#include<string.h>
int main()
{ char str1[20],str2[40],str3[60];
  puts("enter strings");
    gets(str1); 
    gets(str2);
    puts(strncat(str1,str2,8));

}
