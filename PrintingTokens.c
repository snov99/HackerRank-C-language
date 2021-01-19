#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for (int i=0;i<strlen(s);i++) {
        s[i] != ' ' ? printf("%c",s[i]) : printf("\n") ;
    }
    return 0;
}
