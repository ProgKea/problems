#include <string.h>
#include <stdlib.h>

char *maskify(char *masked, const char *string)
{
    masked = malloc(strlen(string)+1);

    if (strlen(string) <= 4) {
        strcpy(masked, string);
    } else {
        memset(masked, '#', strlen(string)-4);
        for (size_t i = strlen(string)-4; i<strlen(string); i++) {
            masked[i] = string[i];
        }
    }

    return masked;
}

#include <stdio.h>

int main(void)
{
    printf("Answer:\t%s\nExpect:\t############5616\n", maskify("", "4556364607935616"));
    return 0;
}
