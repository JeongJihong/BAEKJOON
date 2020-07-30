#include <stdio.h>

int main()
{
	int n, i, j;
	
	scanf("%d", &n);
	
	for(i = 2 * n - 1; i > 0; i = i - 2) {
		for(j = 0; j < ((2 * n - 1) - i) / 2; ++j) 
			printf(" ");
		for(j = 0; j < i; ++j)
			printf("*");
		printf("\n");
	}
	
	for(i = 3; i <= 2 * n - 1; i = i + 2) {
		for(j = 0; j < ((2 * n - 1) - i) / 2; ++j) 
			printf(" ");
		for(j = 0; j < i; ++j)
			printf("*");
		if(i != 2 * n - 1)
			printf("\n");
	}
	
	return 0;
	
}
