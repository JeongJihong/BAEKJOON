#include <stdio.h>

void print(int);
int main()
{
	int i, n;
	
	scanf("%d", &n);
	if(n == 1)
		printf("*\n");
	else	
		print(n);
	return 0;
	
}

void print(int n)
{
	int i, j;
	for(i = 0; i < n * 2; ++i) {
		if(i % 2 == 0) {
			for(j = 0; j < n - n /2; ++j)
				printf("* ");
			printf("\n");
		}
		else {
			for(j = 0; j < n / 2; ++j)
				printf(" *");
			printf("\n");
		}
	}
}
