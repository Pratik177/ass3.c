#include<stdio.h>
 int main()
 {
        int n1,n2,i,hcf,lcm,a,b;
        printf("enter a two number\n");
        scanf("%d %d",&n1,&n2);
        a=n1;
        b=n2;
      
      while(b!=0)
       {
           i=b;
           b=a%b;
           a=i;
       }
      hcf=a;
      lcm=(n1*n2)/hcf;
      printf("the hcf is %d\n",hcf);
      printf("the lcm is %d\n",lcm);
    return 0;
 }
