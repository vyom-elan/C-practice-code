/*
Problem: Write a program in C to display the table of a number and print the sum of all the multiples in it.

Test Cases:

Test Case 1:
Input:
5
Expected Result Value:
5, 10, 15, 20, 25, 30, 35, 40, 45, 50
275

Test Case 2:
Input:
12
Expected Result Value:
12, 24, 36, 48, 60, 72, 84, 96, 108, 120
660
*/
#include<stdio.h>
int main()
{
    int n,i,a;
    int sum=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        sum=sum+n*i;
        printf("%d \n", n*i);
    }
    printf("The sum of all the number is \n %d",sum);
    return 0;

}
