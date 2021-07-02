#include<stdio.h>
#include<math.h>
int main()
{  
   float n,i,r;
     printf("enter a term:-");
     scanf("%f",&n);
       for(i=1;i <=n;i++)
        {
          r += i/(pow(i,i));
      
        }
      printf("th sum of series is %f\n",r);
    return 0;
    }
    
