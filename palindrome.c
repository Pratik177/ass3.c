#include<stdio.h>
int main()
{
    int n,b,rev=0,org;
    printf("enter a number\n");
    scanf("%d",&n);
    org=n;
    while(n!=0){
    b=n%10;
    rev=rev*10+b;
    n=n/10;}
    if(org==rev)
{printf("%d the number is palindrome \n",org);}
    else
   { printf("%d the number is not palindrome \n",org);}
    return 0;
}