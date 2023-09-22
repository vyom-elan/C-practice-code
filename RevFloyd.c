#include <stdio.h>
void Rev_Floyd(int row)
{
	int max_val = row * (row + 1) / 2;
	int num = max_val;
	for (int i = row; i >= 1; i--) 
  {
		for (int j = 1; j <= i; j++) 
    {
			printf("%d ", num);
			num--;
		}
		printf("\n");
	}
}
int main()
{
	int row;
  printf("Enter the number of rows you want \n");
  scanf("%d",&row);
	Rev_Floyd(row);
	return 0;
}
