#include <stdio.h>
int main()
{
	unsigned char a = 5, b = 9;
	printf("a<<1 = %d\n", (a << 1));
	printf("b<<1 = %d", (b << 1));      //lshift
  printf("a>>1 = %d\n", (a >> 1));    //rshift
  printf("b>>1 = %d", (b >> 1));
	return 0;
}
