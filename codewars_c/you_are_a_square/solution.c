#include <stdbool.h>
#include <math.h>

bool is_square(int n) 
{
    int x = sqrt(n);
    return x * x == n;
}

#include <stdio.h>

int main()
{
    printf("4 %d\n", is_square(4));
    printf("3 %d\n", is_square(3));
    printf("25 %d\n", is_square(25));
    printf("-1 %d\n", is_square(-1));
    printf("-25 %d\n", is_square(-25));

    return 0;
}
