#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,total=0;
    scanf("%d",&n); 
    int arr[n];
    for (i=0;i<n;i++) {
        scanf("%d",arr + i);
    }
    for (j=0;j<n;j++) {
        total += arr[j];
    }
    printf("%d",total);
    return 0;
}
