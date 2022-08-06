#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char s[1000];
  char compare = ' ';
  int frequency = 0;
  fgets(s, 1000, stdin);

  for (int i = 0; i<10; i++) {
    compare = i+'0';
    for (int j = 0; j<strlen(s)-1; j++) {
      if (compare == s[j]) frequency++;
    }
    printf("%d ", frequency);
    frequency = 0;
  }
  return 0;
}
