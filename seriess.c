#include<stdio.h>
int main()
{
    long  sum=0;
    long int t=1;
    int n,i;
    printf("enter a n term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%ld",t);
        {
            if(i<n)
            printf("+ ");
        }
        sum=sum+t;
        t=(t*10+1);
    }
    printf("\n %ld",sum);
    return 0;

}