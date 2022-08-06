#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(char **s, int a, int b) 
{
  char *temp = s[a];
  s[a] = s[b];
  s[b] = temp;
}

int next_permutation(int n, char **s)
{
  for (int i=0; i<n; i++) {
    swap(s, i, i+1);
    next_permutation(n, s);
    swap(s, i, i+1);
  }
  return 0;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
