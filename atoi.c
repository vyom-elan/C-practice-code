#include<stdio.h>
int myatoi(const char*stri);
int main(int argc,char*argv[])
{
    printf("\n%d\n",myatoi("3vyng73"));
    getch();
    return(0);
}
int myatoi(const char *stri)
{
    int i=0;
    while(*stri)
    {
        i=(i<<3)+(i<<1)+(*stri-'0');
        stri++;
    }
    return(i);
}
