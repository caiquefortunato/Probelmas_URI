#include <stdio.h>

#define PI 3.14159

int main()
{
	//double PI: 3.14159;	
	double raio, area;

	scanf("%lf",&raio);

	area = (PI * (raio * raio));

	printf("A=%.4lf",area);

	printf("\n");

	return 0;
}