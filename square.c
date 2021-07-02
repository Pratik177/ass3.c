#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,sum=0,r;
    printf("enter a nth number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        r=pow(i,2);
   printf(" %d",r);
   sum +=r;
    }
    
    printf("sum is %d\n",sum);
    return 0;
}