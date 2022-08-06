#include <stdio.h>

int main() {
  char c;
  char s[100];
  char sen[100];
  scanf("%c %s %[^\n]%*c", &c, s, sen);
  printf("%c\n%s\n%s", c, s, sen);
  return 0;
}
