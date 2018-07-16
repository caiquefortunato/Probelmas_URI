#include <stdio.h>
#include <stdlib.h>
#define MAX 61

typedef struct Vetor
{
	long long int fibonacci;
	int calls;
} Vetor;

int main()
{

	int testes, numero;
	int i;
	Vetor vet[MAX];
	
	vet[0].fibonacci = 0; //vet[0].calls = 0;
	vet[1].fibonacci = 1; //vet[1].calls = 0;
	
	for(i = 2; i < MAX; i++)
	{
		vet[i].fibonacci = vet[i - 1].fibonacci + vet[i - 2].fibonacci;
		//vet[i].calls = (vet[i - 1].calls + vet[i - 2].calls) + 2;
	}
	
	scanf("%d", &testes);
	for(i = 0; i < testes; i++)
	{
		scanf("%d", &numero);
		
		//fib(5) = 14 calls = 5
		//printf("fib(%d) = %d calls = %d\n", numero, vet[numero].calls, vet[numero].fibonacci);
		printf("Fib(%d) = %llu\n", numero, vet[numero].fibonacci);
	}

	return 0;
}