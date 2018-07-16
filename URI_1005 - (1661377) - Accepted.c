#include <stdio.h>

int main()
{
	double val1, val2;

	scanf("%lf",&val1);
	scanf("%lf",&val2);

	double media;

	media = (((val1 * 3.5) + (val2 * 7.5)) / 11);

	printf("MEDIA = %.5lf",media);
	printf("\n");

	return 0;
}