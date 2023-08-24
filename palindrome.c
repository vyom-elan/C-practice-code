/*
Write a program in C such that it takes a lower limit and upper limit as inputs and print all the intermediate palindrome numbers.

Test Cases:

TestCase 1:
Input :
10 , 80
Expected Result:
11 , 22 , 33 , 44 , 55 , 66 , 77.

Test Case 2:
Input:
100,200
Expected Result:
101 , 111 , 121 , 131 , 141 , 151 , 161 , 171 , 181 , 191.
*/

#include<stdio.h>
int main()
{
    int i,n,rev,d,up,low;
    printf("Enter the upper limit \n");
    scanf("%d",&up);
    printf("Enter the upper limit \n");
    scanf("%d",&low);
    for(i=up;i<=low;i++)
    {
        rev=0;
        n=i;
        while(n!=0)
        {
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        if(i==rev)
            printf("%d \n",i);
    }
    return 0;
}
