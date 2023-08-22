/*You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
Assumption:
Input string will not be empty.

Example:

Input 1:
aA1_67
Input 2:
a987 abC012*/

#include<stdio.h>
#include<string.h>
int chckpswd(char str[],int n)
{
    if(n<4)
        return 0;
    if(str[0]-'0'>=0 && str[0]-'0'<=9)
        return 0;
    int a=0, cap=0, nu=0;
    while(a<n)
    {
        if(str[a]==' '||str[a]=='/')
            return 0;
        if(str[a]>='A'&&str[a]<='Z')
        {
            cap++;
        }
        else if(str[a]-'0'>=0 && str[a]-'0'<=9)
        {
            nu++;
        }
        a++;
    }
    return cap>0 && nu>0;
}

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    int result = chckpswd(str,len);
    printf("%d \n", result);
    return 0;
}
