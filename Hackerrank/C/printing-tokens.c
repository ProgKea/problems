#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s;
    char *new_string = "";
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (int i = 0; i<strlen(s); i++) {
      if (s[i] == ' ') {
        new_string[i] = '\n';
      } else new_string[i] = s[i];
    }
    printf("%s", new_string);
    return 0;
}
