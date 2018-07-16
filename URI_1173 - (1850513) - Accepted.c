#include<stdio.h>

int main()
{
	int entrada, vetor[10];
	int a, b, c, resultado;
	
	scanf("%d",&entrada);
	
	for (a = 0; a < 10; a++)
	{
		vetor[a] = 0;
	}
	
	for (b = 0; b < 10; b++)
	{
		vetor[0] = entrada;
		
		if (b == 0)
			printf("N[%d] = %d", b, entrada);
		
		vetor[b] = vetor[b-1]*2;

		if (b > 0)
			printf("\nN[%d] = %d", b, vetor[b]);
	}
	
	printf("\n");
	
	return 0;
}