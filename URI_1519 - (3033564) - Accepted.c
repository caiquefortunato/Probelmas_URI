#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Elemento
{
	char *palavra;
	int lucro;
	int quantidade;
	struct Elemento *prox;
} Elemento;

typedef struct Lista
{
	Elemento *primeiro;
	Elemento *ultimo;
	int tamanho;
} Lista;

typedef struct Palavra
{
	char palavra[31];
	int lucro;
} Palavra;

// Prototipo das funcoes
Lista *cria_lista();
void insere_lista(Lista *lista, char *vetor, Palavra *alfabeto, int tam);
Elemento *pesquisa_lista(Lista *lista, char *vetor);
void libera_lista(Lista *lista);
void exibe_resultado(Lista *lista, Palavra *alfabeto);

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

void insere_lista(Lista *lista, char *vetor, Palavra *alfabeto, int tam)
{
	Elemento *aux, *aux2;
	
	aux = (Elemento*)malloc(sizeof(Elemento));
	aux->quantidade = 0;
	aux->palavra = (char*)malloc((tam+1)*sizeof(char));
	strcpy(aux->palavra, vetor);
	aux->quantidade += 1;
	aux->prox = NULL;
	aux->lucro = tam - 2;
	

	
	// Realizo pesquisa
	aux2 = pesquisa_lista(lista, vetor);

	if(aux2 != NULL)
	{
		aux2->quantidade += 1;
		aux->quantidade = aux2->quantidade;
		aux2->lucro = aux2->quantidade * (tam - 2);
		aux->lucro = aux2->lucro;
	}	
	
	if(alfabeto[aux->palavra[0] - 'a'].lucro < aux->lucro)
	{
		alfabeto[aux->palavra[0] - 'a'].lucro = aux->lucro;
		strcpy(alfabeto[aux->palavra[0] - 'a'].palavra, aux->palavra);
	}
	
	// Ligo os componentes
	lista->tamanho += 1;
	lista->ultimo->prox = aux;
	lista->ultimo = lista->ultimo->prox;
	
	
}

Elemento *pesquisa_lista(Lista *lista, char *vetor)
{
	Elemento *aux;
	aux = lista->primeiro->prox;

	while(aux != NULL)
	{
		if(strcmp(vetor, aux->palavra) == 0)
				return aux;
		else
			aux = aux->prox;
	}

	return NULL;
}

void libera_lista(Lista *lista)
{
	Elemento *aux, *x;
	aux = lista->primeiro->prox;
	
	while(aux != NULL)
	{
		x = aux;
		aux = aux->prox;
		free(x->palavra);
		free(x);
	}
	
	free(lista->primeiro);
	free(lista);
}

void exibe_resultado(Lista *lista, Palavra *alfabeto)
{
	Elemento *aux;
	aux = lista->primeiro->prox;
	int i, cont = 0;
	
	while(aux != NULL)
	{
		if(strcmp (alfabeto[aux->palavra[0] - 'a'].palavra, aux->palavra) == 0 && alfabeto[aux->palavra[0] - 'a'].lucro > 0)
		{
			printf("%c.", aux->palavra[0]);
			if(aux->prox != NULL)
				printf(" ");
		}
		else
		{
			printf("%s", aux->palavra);
			if(aux->prox != NULL)
				printf(" ");
		}
		
		aux = aux->prox;
	}
	
	printf("\n");
	
	for(i = 0; i < 26; i++)
	{
		if(alfabeto[i].lucro != 0)
		{
			cont++;
		}
	}
		
	printf("%d\n", cont);	
	for(i = 0; i < 26; i++)
	{
		if(alfabeto[i].lucro != 0)
		{
			printf("%c. = ", alfabeto[i].palavra[0]);
			printf("%s", alfabeto[i].palavra);
			printf("\n");
		}
	}
		


}

int main()
{
	Lista *lista;
	char vetor[31];
	Palavra alfabeto[26];
	int tam, i;
	char caractere;
	
	while(1)
	{
		//zera vetor
		for(i = 0; i < 26; i++)
		{
			alfabeto[i].lucro = 0;
			strcpy (alfabeto[i].palavra, "");
		}
		
		lista = cria_lista();
		scanf("%s", vetor);
		if(vetor[0] == '.') break;
		tam = strlen(vetor);
		insere_lista(lista, vetor, alfabeto, tam);
		
		while(1)
		{ 
			scanf("%c", &caractere);
			if(caractere == ' ')
				tam = 0;
			if(caractere == '\n')
				break;
			
			scanf("%s", vetor);
			tam = strlen(vetor);
			insere_lista(lista, vetor, alfabeto, tam);
		
		} // fim do primeiro while 1
		
		exibe_resultado(lista, alfabeto);
		libera_lista(lista);
	} // fim do while 2

	return 0;
}