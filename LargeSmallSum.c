/*
def LargeSmallSum(arr)
The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

Assumption:
All array elements are unique
Treat the 0th position as even

NOTE
Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example

Input
arr:3 2 1 7 5 4

Output
7

Explanation

Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element is 4
Thus output is 3+4 = 7
Sample Input

arr:1 8 0 2 3 5 6

Sample Output
8
*/

#include<stdio.h>
int largesmallsum(int arr[], int length)
{
    if(length<=3)
    {
        return 0;
    }
    int evenpos[100],oddpos[100];
    int evencount=0, oddcount=0;
    for(int i=0; i<length; i++)
    {
        if(i%2==0)
        {
            evenpos[evencount++]=arr[i];
        }
        else
        {
            oddpos[oddcount++]=arr[i];
        }
    }
      for (int i = 0; i < evencount - 1; i++)
      {
        for (int j = 0; j < evencount - i - 1; j++)
        {
            if (evenpos[j] < evenpos[j + 1])
            {
                int temp = evenpos[j];
                evenpos[j] = evenpos[j + 1];
                evenpos[j + 1] = temp;
            }
        }
      }
      for (int i = 0; i < oddcount - 1; i++)
        {
            for (int j = 0; j < oddcount - i - 1; j++)
                {
                    if (oddpos[j] > oddpos[j + 1])
                    {
                        int temp = oddpos[j];
                        oddpos[j] = oddpos[j + 1];
                        oddpos[j + 1] = temp;
                    }
                }
        }
    return evenpos[1] + oddpos[1];
}

int main ()
{
  int a,n;
  int arr[10];
  printf("Enter total number of elements in array \n");
  scanf("%d", &n);
  printf("Enter the elements of the array");
  for(a=0;a<n;a++)
  {
      scanf("%d",&arr[a]);
  }
  int length = sizeof (arr) / sizeof (arr[0]);

  int result = largesmallsum (arr, length);
  printf ("%d\n", result);
  return 0;
}
