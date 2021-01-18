#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int len = 2*n-1;
    //first half of columns
  	for (int i=1;i<=n;i++)
    {
        //first half of raw
        int temp1=1;
        int pool[n-1];
        for (int j=1;j<=n;j++)
        {
            printf("%d ",n+1-temp1);
            pool[n-1-j]=n+1-temp1;
            if (temp1<i)
                temp1++;
        }
        
        //secound half of raw
        for (int k=0;k<=n-2;k++)
        {
            printf("%d",pool[k]);
            if (k !=n-2) 
                printf(" ");
        }
        
        printf("\n"); //new line for go to the next raw
    }
    //secound half of columns
    for (int i=1;i<=n-1;i++)
    {
        //first half of raw
        int temp1=1;
        int pool[n-1];
        for (int j=1;j<=n;j++)
        {
            printf("%d ",n+1-temp1);
            pool[n-1-j]=n+1-temp1;
            if (temp1<n-i)
                temp1++;
        }
        
        //secound half of raw
        for (int k=0;k<=n-2;k++)
        {
            printf("%d",pool[k]);
            if (k !=n-2) 
                printf(" ");
        }
        printf("\n"); //new line for go to the next raw
    }
    return 0;
}
