#include<stdio.h>
int main()
{
  printf("Enter the Two Numbers: ");
  int a,b;
  scanf("%d%d",&a,&b);
  printf("Before swapping %d,%d \n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After Swapping %d,%d \n",a,b);
  return 0;
 }
