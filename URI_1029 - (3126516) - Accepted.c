#include <stdio.h>
#include <stdlib.h>
#define MAX 39

/*
    Para otimizar o tempo, é armazenado todos os valores de fibonacci em um vetor
    de structs com tamanho máximo 39, como especificacao. Logo, nao eh preciso 
    recalcular sempre o valor de fibonacci recursivamente, apenas guardar a soma 
    dos anteriores em um vetor e consultar de acordo com o numero de cada caso de 
    teste.
*/

typedef struct Vetor
{
	int fibonacci;
	int calls;
} Vetor;

int main()
{

	int testes, numero;
	int i;
	Vetor vet[MAX];
	
	vet[0].fibonacci = 0; vet[0].calls = 0;
	vet[1].fibonacci = 1; vet[1].calls = 0;
	
	for(i = 2; i < MAX; i++)
	{
		vet[i].fibonacci = vet[i - 1].fibonacci + vet[i - 2].fibonacci;
		vet[i].calls = (vet[i - 1].calls + vet[i - 2].calls) + 2;
	}
	
	scanf("%d", &testes);
	for(i = 0; i < testes; i++)
	{
		scanf("%d", &numero);
		
		//fib(5) = 14 calls = 5
		printf("fib(%d) = %d calls = %d\n", numero, vet[numero].calls, vet[numero].fibonacci);
	}

	return 0;
}