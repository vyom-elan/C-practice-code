#include <stdio.h>
int main()
{
    char aa[100], bb[100];
    printf("\nEnter the first string: ");
    gets(aa);
    printf("\nEnter the second string to be concatenated: ");
    gets(bb);  
    char *a = aa;
    char *b = bb;
    while(*a) 
    {
        a++;    
    }
    while(*b)   
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';  
    printf("\n\n\nThe string after concatenation is: %s ", aa);
    return 0;
}
