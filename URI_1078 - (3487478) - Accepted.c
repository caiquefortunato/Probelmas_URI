#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	scanf("%d", &n);

	for(i = 1; i < 11; i++)
		printf("%d x %d = %d\n", i, n, i * n);

	return 0;
}