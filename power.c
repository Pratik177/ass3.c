#include<stdio.h>
int main()
{
  int b,p,i,r=1;
  printf("enter a base and power\n:");
  scanf("%d %d",&b,&p);
     for(i=1;i<=p;i++)
        {
          r=r*b;
          }
          printf("the power of %d with %d is= %d\n",b,p,r);
           return 0;
           }
