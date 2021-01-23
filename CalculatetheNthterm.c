#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) 
{
  switch (n)
  {
      case 1: return a;
      case 2: return b;
      case 3: return c;
  }
  int total;
  for (int i=1; i<3;i++)
  {
      total += find_nth_term(n-i, a, b, c);
  }
  return total;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
