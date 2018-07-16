#include <stdio.h>
#include <stdlib.h>
#define TRUE 1

int chamada;

int fibonacci (int numero)
{
	/*Pela definicao do URI usando recursividade
		fib(0) = 0
		fib(1) = 1
		fib(n) = fib(n-1) + fib(n-2);
	*/
	chamada++; // Conto quantas chamadas da funcao
	if (numero == 0)
		return 0;
	if (numero == 1)
		return 1;
	else
		return fibonacci(numero - 1) + fibonacci(numero - 2);
}


int main()
{
	int numero, resposta, testes;
	int i;
	
	// quantos testes tem?
	scanf("%d", &testes);
	i = 0;
	while(TRUE)
	{
		if(i >= testes) break;
		i++;
		
		scanf("%d", &numero);
		chamada = 0, resposta = 0;
		resposta = fibonacci(numero);
	
		//Já que não faz chamada para fib(n), diminui ele.
		chamada = chamada - 1;
	
		//fib(5) = 14 calls = 5
		printf("fib(%d) = %d calls = %d\n", numero, chamada, resposta);
	}
	
	return 0;
}