#include <stdio.h>

int main()
{
	double val1, val2, val3, media;

	scanf("%lf",&val1);
	scanf("%lf",&val2);
	scanf("%lf",&val3);

	media = (((val1 * 2) + (val2 * 3) + (val3 * 5)) / 10);

	printf("MEDIA = %.1lf",media);
	printf("\n");

	return 0;
}