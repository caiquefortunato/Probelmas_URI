#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Elemento
{
	char caractere;
	struct Elemento *prox;
}Elemento;

typedef struct Lista
{
	Elemento *primeiro;
	Elemento *ultimo;
	int tamanho;
}Lista;

// Prototipo
Lista *cria_lista();
int pesquisa_lista(Lista *lista, char item);
void insere_lista(Lista *lista, char item);
void exibe_resultado(Lista *lista);
void libera_lista(Lista *lista);

// Funcoes
Lista *cria_lista()
{
	Lista *lista;
	lista = (Lista*)malloc(sizeof(Lista));
	
	lista->tamanho = 0;
	lista->primeiro = (Elemento*)malloc(sizeof(Elemento));
	lista->primeiro->prox = NULL;
	lista->ultimo = lista->primeiro;

	return lista;
}

void insere_lista(Lista *lista, char item)
{
	Elemento *aux;
	int resultado;
	
	resultado = pesquisa_lista(lista, item);

	if(resultado == 0)
	{
		aux = (Elemento*)malloc(sizeof(Elemento));
		//strcpy(aux->caractere, item);
		aux->caractere = item;
		aux->prox = NULL;

		lista->tamanho += 1;
		lista->ultimo->prox = aux;
		lista->ultimo = lista->ultimo->prox;
	}
}

int pesquisa_lista(Lista *lista, char item)
{
	Elemento *aux;
	aux = lista->primeiro->prox;

	while(aux != NULL)
	{
		//if(strcmp(item, aux->caractere) == 0)
		if(aux->caractere == item)
			return 1;
		else
			aux = aux->prox;
	}
	
	return 0;
}

void exibe_resultado(Lista *lista)
{
	Elemento *aux;
	aux = lista->primeiro->prox;
	/*
	int vetor[lista->tamanho];
	int i = 0;

	printf("O tamanho eh %d\n", lista->tamanho);
	
	puts(" ");
	
	while(aux != NULL)
	{
		vetor[i] = aux->caractere;
		aux = aux->prox;
		i++;
	}

	
	for(i = 0; i < lista->tamanho; i++)
	{
		printf("%c", vetor[i]);
	}
	
	puts(" ");
	*/
	
	if(lista->tamanho == 26)
		printf("frase completa\n");
	else if(lista->tamanho >= 13 && lista->tamanho <= 25)
		printf("frase quase completa\n");
	else if(lista->tamanho < 13) 
		printf("frase mal elaborada\n");
	else
		printf("Erro\n");
}

void libera_lista(Lista *lista)
{
	Elemento *aux, *x;
	aux = lista->primeiro->prox;

	while(aux != NULL)
	{
		x = aux;
		aux = aux->prox;
		free(x);
	}
	
	free(lista->primeiro);
	free(lista);
}

// Main
int main()
{
	Lista *lista;
	char caractere, lixo;
	int entrada;
	int i, j;

	scanf("%d", &entrada);
	for(i = 0; i < entrada; i++)
	{
		lista = cria_lista();
		j = 0;
		while(1)
		{
			scanf("%c", &caractere);
			if (j == 0)
			{
				if(caractere >= 97 && caractere <= 122) insere_lista(lista, caractere);
			}
			else
			{
				if(caractere >= 97 && caractere <= 122) insere_lista(lista, caractere);
				if(caractere == '\n') break;
			}
			j++;
			//if(caractere == '\n') break;
			//if(caractere == ' ') lixo = caractere;
			//if(caractere == 44) lixo = caractere;
			//if(caractere >= 97 && caractere <= 122) insere_lista(lista, caractere);
			//if(caractere == '\n') break;
		}
		
		//printf("O tamanho eh %d\n", lista->tamanho);
		// Finaliza o caso de teste i
		exibe_resultado(lista);
		libera_lista(lista);
	} // fim da leitura da entrada


	return 0;
}