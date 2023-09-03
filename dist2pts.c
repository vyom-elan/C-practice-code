#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("Enter x1,y1 : \n");
    scanf("%f %f",&x1,&y1);
    printf("Enter x2,y2 : \n");
    scanf("%f %f",&x2,&y2);
    printf("Enter x3,y3 : \n");
    scanf("%f %f",&x3,&y3);
    float Fd =(float) sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2));
    float Sd =(float) sqrt (pow (x3 - x2, 2) + pow (y3 - y2, 2));
    float Td =(float) sqrt (pow (x3 - x1, 2) + pow (y3 - y1, 2));
    printf("%f",(Fd + Sd + Td));
    return 0;
}
