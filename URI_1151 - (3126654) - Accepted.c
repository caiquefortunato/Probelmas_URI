#include <stdio.h>
#include <stdlib.h>
#define MAX 47

typedef struct Vetor
{
	long long int fibonacci;
} Vetor;

int main()
{

	int testes, numero;
	int i, j;
	Vetor vet[MAX];
	
	vet[0].fibonacci = 0;
	vet[1].fibonacci = 1;
	
	for(i = 2; i < MAX; i++)
	{
		vet[i].fibonacci = vet[i - 1].fibonacci + vet[i - 2].fibonacci;
	}
	

	scanf("%d", &numero);

	for(j = 0; j < numero; j++)
	{
		if(j == numero - 1)
			printf("%llu\n", vet[j].fibonacci);
		else
			printf("%llu ", vet[j].fibonacci);
	}

	return 0;
}