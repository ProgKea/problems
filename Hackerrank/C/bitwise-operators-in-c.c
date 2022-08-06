#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) 
{
  int maxand, maxor, maxxor;
  maxand = maxor = maxxor = 0;
  for (int i = 1; i<n; i++) {
    for (int j = i+1; j<=n; j++) {
      if (maxand < (i & j) && (i & j) < k) 
        maxand = i&j;
      if (maxor < (i | j) && (i | j) < k) 
        maxor = i | j;
      if (maxxor < (i ^ j) && (i ^ j) < k) 
        maxxor = i ^ j;
    }
  }
  printf("%d\n", maxand);
  printf("%d\n", maxor);
  printf("%d\n", maxxor);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
