#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() 
{
    int i, j, digits[10] = {};
    char *s;
    s = malloc(2000 * sizeof(char));
    scanf("%s",s);
    int s_len=strlen(s);
    s = realloc(s, s_len+1);
 
    for (i=0 ; i<s_len ;i++) 
    {
        if (isdigit(s[i])) 
        {
            int num = (int) s[i] - '0';
            digits[num] +=1;           
        }
    }
    
    for (j=0 ; j<10 ;j++) 
    {
        printf("%d ",digits[j]);
    }
   
    return 0;
}
