#include <stdio.h>
#define max(a,b) \
  ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
    _a > _b ? _a : _b; })

int max_of_four(int a, int b, int c, int d) {
  if (max(a, b) > max(c, d))
    return max(a,b);
  else return max(c, d);
}

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans); 
  return 0;
}
