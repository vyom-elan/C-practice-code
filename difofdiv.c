//Difference in divisibility sums
/*
def differenceofSum(n.m)
The function takes two integrals m and n as arguments. You are required to obtain the total of all integers ranging between 1 to n (both inclusive) which are not divisible by m. You must also return the distinction between the sum of integers not divisible by m with the sum of integers divisible by m.
Assumption
m > 0 and n > 0
Sum lies within the integral range
Example
Input:
m = 6
n = 30
Output:
285
Integers divisible by 6 are 6, 12, 18, 24, and 30. Their sum is 90.
Integers that are not divisible by 6 are 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 25, 26, 27, 28, and 29. Their sum is 375.
The difference between them is 285 (375 – 90).
Sample input:
m = 3
n = 10
Sample output:
19
*/
#include <stdio.h>
int difofsum(int m,int n)
{
    int i,dif;
    int div=0;
    int ndiv=0;
    for(i=0;i<n+1;i++)
    {
        if(i%m==0)
        {
           div=div+i;
        }
        else
        {
            ndiv=ndiv+i;
        }
    }
    dif=div-ndiv;
    dif=abs(dif);
    printf("The difference is %d", dif);
}
int main()
{
    int n,m;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    printf("Enter the value of m \n");
    scanf("%d",&m);
    difofsum(m,n);
}
