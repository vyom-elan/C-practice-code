#include <stdio.h>
int main()
{
   printf("File name is:%s\n", __FILE__ );
   printf("Current Date is:%s\n", __DATE__ );
   printf("Current Time is:%s\n", __TIME__ );
   printf("The Line no is:%d\n", __LINE__ );
   printf("Standard C :%d\n", __STDC__ );
   return 0;
}
