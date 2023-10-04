#include<stdio.h>
int main()
{
  int area,height,base;
  printf("Enter the height of the triangle \n");
  scanf("%d", &height);
  printf("Enter the base of the triangle");
  scanf("%d", &base);
  area=0.5*height*base;
  printf("Area of the triangle is %d sq units\n",area);
}
