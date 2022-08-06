#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, *arr, i, left=0;
  scanf("%d", &num);
  int right = num-1;
  arr = (int*) malloc(num * sizeof(int));
  for(i = 0; i < num; i++) {
    scanf("%d", arr + i);
  }

  while (left < right) {
    int temp = arr[left];
    arr[left++] = arr[right];
    arr[right--] = temp;
  }

  for(i = 0; i < num; i++)
    printf("%d ", *(arr + i));
  return 0;
}
