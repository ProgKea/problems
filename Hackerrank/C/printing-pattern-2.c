#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_pattern(int n) {
  int size = n*2-1;
  for (int row = 0; row<size; row++) {
    for (int column = 0; column<size; column++) {
      int min = row<column? row:column;
      min=min<size-row? min:size-row-1;
      min=min<size-column? min:size-column-1;
      printf("%d ", n-min);
    }
    printf("\n"); 
  }
}

int main() 
{
  int n;
  scanf("%d", &n);
  print_pattern(n);
  return 0;
}
