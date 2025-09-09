#include <stdio.h>
#include <stdlib.h>
void main()
{
 int a,b,c,temp;
 printf("Enter the two numbers");
 scanf("%d %d",&a,&b);
 temp=a;
 a=b;
 b=temp;
 printf("swapped values are %d %d",a,b);
}
