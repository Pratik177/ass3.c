#include<stdio.h>
int main()
{
       int num,rem,c,sum,count=1;
       while(count<=500)
       {
           num=count;
           sum=0;
           while(num)
            {
           rem=num%10;
           c=rem*rem*rem;
           sum=sum+c;
           num=num/10;
            }
       }
      if(count==sum)
      count ++;

      {printf("the arm strong number is %d",count);}
return 0;
       }
    