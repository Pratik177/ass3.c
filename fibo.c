#include<stdio.h>
int main()
{  
    int n,i,c,a,b;
    printf("enter a n term=");
    scanf("%d",&n);
      a=0;b=1;c=0;
    for(i=1;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf(" %d",c);

    }
    return 0;
    
}
