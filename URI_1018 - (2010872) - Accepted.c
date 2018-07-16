#include<stdio.h>

int main()
{
	int aux;
	int valor;/*DIGITADO NA TELA*/
	int soma;/*TOTAL DE NOTAS DE CADA VALOR*/
	int R$100;/*QUANTIDADES DE NOTAS R$100*/
	int R$50;/*QUANTIDADES DE NOTAS R$50*/
	int R$20;/*QUANTIDADES DE NOTAS R$20*/
	int R$10;/*QUANTIDADES DE NOTAS R$10*/
	int R$5;/*QUANTIDADES DE NOTAS R$5*/
	int R$2;/*QUANTIDADES DE NOTAS R$2*/
	int R$1;/*QUANTIDADES DE NOTAS R$1*/
	scanf("%d",&valor);
	aux = valor;
	
	R$100 = valor / 100;
	valor = valor % 100;
	R$50 = valor / 50;
	valor = valor % 50;
	R$20 = valor / 20;
	valor = valor % 20;
	R$10 = valor / 10;
	valor = valor % 10;
	R$5 = valor / 5;
	valor = valor % 5;
	R$2 = valor / 2;
	R$1 = valor % 2;

	printf("%d\n", aux);
	printf("%d nota(s) de R$ 100,00\n", R$100);
	printf("%d nota(s) de R$ 50,00\n",R$50);
	printf("%d nota(s) de R$ 20,00\n",R$20);
	printf("%d nota(s) de R$ 10,00\n",R$10);
	printf("%d nota(s) de R$ 5,00\n",R$5);
	printf("%d nota(s) de R$ 2,00\n",R$2);
	printf("%d nota(s) de R$ 1,00\n",R$1);
	
	return 0;
}