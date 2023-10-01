#include<stdio.h>  
#include <string.h>    
int main()
{    
  char str[20];    
  printf("Enter string: ");    
  gets(str);
  printf("String is: %s",str);    
  printf("\n Lower String is: %s",strlwr(str));    
 return 0;    
}    
