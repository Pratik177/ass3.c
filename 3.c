#include<stdio.h>
#include<math.h>
int main()
{
int  i=1,sum=0;
for(i=1;i<=100;i++)
{
sum+=i*i*i;
printf("%d\n",sum);
}
return 0;
}
