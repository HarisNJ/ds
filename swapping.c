#include<stdio.h>
void main()
{
   int a, b;
   printf("Enter two numbers:\n");
   scanf("%d %d", &a, &b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("After swapping, the values are:\n");
   printf("a=%d\n",a);
   printf("b=%d\n",b);
}
