#include<stdio.h>

int main()
{
	int entrada;
	char espaco;

	while (scanf("%d",&entrada) != EOF)
	{
		scanf("%c",&espaco);
		
		if (entrada == 0)
			printf ("vai ter copa!");
		else 
			printf ("vai ter duas!");
	
	printf("\n");
	}

	return 0;
}