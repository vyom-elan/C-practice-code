/*The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

Note:

Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range.
Example:

Input:

r: 7
unit: 2
n: 8
arr: 2 8 3 5 7 4 1 2
Output:

4

Explanation:
Total amount of food required for all rats = r * unit

= 7 * 2 = 14.

The amount of food in 1st houses = 2+8+3+5 = 18. Since, amount of food in 1st 4 houses is sufficient for all the rats. Thus, output is 4.*/
#include<stdio.h>
int calcrat(int r,int unit, int arr[], int n)
{
    if(n==0)
        return -1;
    int foodreq = r*unit;       //total food requirement
    int prfood = 0;             //food present till now
    int i = 0;                  //counter which gives the house number
    for(i=0;i<n;++i)
    {
        prfood +=arr[i];
        if(prfood>=foodreq)
            break;
    }
    if(foodreq>prfood)
        return 0;
    return i+1;
}

int main()
{
    int r;
    printf("Enter the value of r \n");
    scanf("%d",&r);
    int unit;
    printf("Enter the value of unit \n");
    scanf("%d", &unit);
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",arr[i]);
    }
    printf("%d", calcrat
           (r,unit,arr,n));
    return 0;

}
