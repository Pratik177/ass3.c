#include<stdio.h>
int main()
{  
    int n,i,c,a,b;
    printf("enter a n term=");
    scanf("%d",&n);
    a=0;b=1;c=0;
    for(i=1;i<=n;i++)
    {
          printf(" %d ",c);
        a=b;
        b=c;
        c=a+b;
  

    }
    return 0;
    
}
