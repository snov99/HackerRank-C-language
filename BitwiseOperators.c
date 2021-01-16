#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) 
{
    int m_and = 0;
    int m_or = 0;
    int m_xor = 0;
    int a,b,c;
    for (int i=1;i<n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            a=i&j;
            b=i|j;
            c=i^j;
            if (a < k && a > m_and)
                m_and=a;
            if (b < k && b > m_or)
                m_or=b;
            if (c < k && c > m_xor)
                m_xor=c; 
        }
    }
    printf("%d\n%d\n%d",m_and,m_or,m_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
