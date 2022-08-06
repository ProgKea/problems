#include <stdlib.h>

void sort_array(size_t n, int arr[n])
{
    int odd_size = 0;
    int odd_index[n];
    for (size_t i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            odd_index[odd_size] = i;
            odd_size++;
        }
    }
}

#include <stdio.h>
int main()
{
    sort_array(6, (int[]){5,3,2,8,1,4});
    return 0;
}
