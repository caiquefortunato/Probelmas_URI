// URI 1074
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, val;
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &val);
		
		if(val == 0) printf("NULL");
		if((val % 2 == 0) && val > 0) printf("EVEN POSITIVE");
		if((val % 2 == 0) && val < 0) printf("EVEN NEGATIVE");
		if((val % 2 != 0) && val > 0) printf("ODD POSITIVE");
		if((val % 2 != 0) && val < 0) printf("ODD NEGATIVE");
		printf("\n");
	}


	return 0;
}