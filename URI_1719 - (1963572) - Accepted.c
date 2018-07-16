#include <stdio.h>
#include <stdlib.h>

// Prototipo das funcoes
int Converte_decimal (int binario);
int Converte_binario (int decimal);

int main()
{

	int binario[32];
	int primeiro, ultimo; //, instrucao;
	int i, cont, acm, aux, aux2, aux3;
	int y, result;
	
	// leio os elementos
	
	while (scanf("%d", &binario[0]) != EOF)
	{

		for (i = 1; i < 32; i++)
		{
			scanf("%d", &binario[i]);
		}
		
		y = 10000000, cont = 0, acm = 0;
		
		while (1)
		{
			primeiro = binario[cont] / 100000;
			//instrucao = binario[cont] / 100000;
			//printf("%d \n", primeiro);

			if (primeiro == 0)// DUVIDA AQUI!
			{ 
				ultimo = binario[cont] % 100000;
				aux = Converte_decimal(ultimo);
				aux2 = binario[aux];
				aux3 = Converte_binario(acm);
				binario[aux] = aux3;
				cont += 1;
				if (cont >= 32)
					cont = 0;
			} // fim if da cond STA

			if (primeiro == 1)
			{
				//cont += 1;
				ultimo = binario[cont] % 100000;
				aux = Converte_decimal(ultimo);
				// ultimo == '30'
				aux2 = binario[aux];
				acm = Converte_decimal(aux2);
				cont += 1;
				if (cont >= 32)
					cont = 0;
			} // fim if da cond LDA

			if (primeiro == 10)
			{
				if (acm == 0)
				{
					ultimo = binario[cont] % 100000;
					cont = Converte_decimal(ultimo);
				}
				else
					cont += 1;
					if (cont >= 32)
					cont = 0;
			} // fim if da cond BEQ

			if (primeiro == 11)
			{
				cont += 1;
				if (cont >= 32)
					cont = 0;
			} // fim if da cond NOP

			if (primeiro == 100)
			{
				acm = acm - 1;
				if (acm < 0)
				{
					acm = 255;
				}
				cont += 1;
				if (cont >= 32)
					cont = 0;
			} // fim if da cond DEC

			if (primeiro == 101)
			{
				acm = acm + 1;
				if (acm > 255)
				{
					acm = 0;
				}
				cont += 1;
				if (cont >= 32)
					cont = 0;
			} // fim if da cond INC

			if (primeiro == 110)
			{
				ultimo = binario[cont] % 100000;
				cont = Converte_decimal(ultimo);
				if (cont >= 32)
					cont = 0;
			} // fim if da cond JMP

			if (primeiro == 111)
			{
				break;
			} // fim if da cond HLT
		}
		
		result = Converte_binario(acm);
	
		if (acm == 0)
			printf("00000000\n");
		else
		{
		while (result / y == 0)
		{
		printf("0");
		y = y / 10;
		}
	  
		printf("%d\n",Converte_binario(acm));
		}
	}

	return 0;
}

// Converto o numero em binario para decimal
int Converte_decimal (int binario)
{
	int resultado, potencia;
	resultado = 0, potencia = 1;
	
	for(;binario > 0; binario = binario/10)
	{
		resultado = resultado + ((binario % 10) * potencia);
		potencia = potencia<<=1; // bit a bit, * 2
	}
	
	return resultado;
}

// Converto o numero em decimal para binario
int Converte_binario (int decimal)
{
	int binario, aux;
	binario = 0, aux = 1;

	while (decimal > 0)
	{
		binario = (binario + (decimal % 2) * aux);
		decimal = decimal / 2;
		aux = aux * 10;
	}
	
	return binario;
}