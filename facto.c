#include<stdio.h>
int main()
  {
     int n,i,facto=1;
     printf("enter a number :-");
     scanf("%d",&n);
       if(n<0)
       {printf("fraction does not exist");
       }
         {for(i=1;i<=n;i++)
         {facto *=i;}
         printf("the factorial of  is%d ",facto);
         }
      return 0;
      }
