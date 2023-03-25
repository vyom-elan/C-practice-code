#include <stdio.h>
int main()
{
    FILE*fp;
    int c;
    fp=fopen(__FILE__,"r");
    do{
        c=getc(fp);     //read character
        putchar(c);     //display character
    }
    while(c!=EOF);      //loop until the end of file is reached
    fclose(fp);
    return 0;
}
