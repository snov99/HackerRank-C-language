#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int len = 2*n-1;
  	for (int i=0;i<len-1;i++)
    {
        for (int j=0;j<=len-1;j++)
        {
            if (i==0 || i==len-1 || j==0 || j==len-1)
                    printf("%d",n);
            if ((i!=0 && j==1)||(i!=len-1 && j==1))
                    printf("%d",n-1);
                
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
