/*
def differenceofSum(n. m)
The function accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible by n.
Assumption:
n>0 and m>0
Sum lies between integral range
Example
Input
n:4
m:20
Output
90

Explanation
Sum of numbers divisible by 4 are 4 + 8 + 12 + 16 + 20 = 60
Sum of numbers not divisible by 4 are 1 +2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150
Difference 150 – 60 = 90
Sample Input
n:3
m:10
Sample Output
19 */

#include<stdio.h>
int differenceofSum (int n, int m)
{
  int i, sum1 = 0, sum2 = 0;
  for (i = 1; i <= m; i++)
    {
      if (i % n == 0)
	{
	  sum1 = sum1 + i;
	}
      else
	{
	  sum2 = sum2 + i;
	}
    }
  if (sum2 > sum1)
    return sum2 - sum1;
  else
    return sum1 - sum2;
}
int main ()
{
  int n, m;
  int result;
  scanf ("%d", &n);
  scanf ("%d", &m);
  result = differenceofSum (n, m);
  printf ("%d", result);
  return 0;
}
