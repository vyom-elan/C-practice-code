/*Int OperationChoices(int c, int n, int a , int b )

The function accepts 3 positive integers ‘a’ , ‘b’ and ‘c ‘ as its arguments. Implement the function to return.

( a+ b ) , if c=1
( a – b ) , if c=2
( a * b ) ,  if c=3
(a / b) ,  if c =4
Assumption : All operations will result in integer output.

Example:

Input
c :1
a:12
b:16
Output:
Since ‘c’=1 , (12+16) is performed which is equal to 28 , hence 28 is returned.
Sample Input

 c : 2

 a : 16

 b : 20

Sample Output

-4*/
#include<stdio.h>
int OperationChoices(int c,int n, int a , int b )
{
    if(c==1)
    {
        n=a+b;
        printf("%d",n);
    }
    else if(c==2)
    {
        n=a-b;
        printf("%d",n);
    }

    else if(c==3)
    {
        n=a*b;
        printf("%d",n);
    }
    else if(c==4)
    {
        n=a/b;
        printf("%d",n);
    }
    else
        printf("Invalid input");

}
int main()
{
    int a,b,c,n;
    printf("Enter the value of c within range 1-4 \n");
    scanf("%d \n", &c);
    printf("Enter the value of a and b \n");
    scanf("%d \n", &a);
    scanf("%d \n", &b);
    OperationChoices(a,b,n,c);
}
