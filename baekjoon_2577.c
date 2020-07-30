#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, A, B, C, mul, a[10] = {0,}, num, div;
	
	scanf("%d%d%d", &A, &B, &C);
	div = mul = A * B * C;

	for(i = 10; div != 0;) {
		num = div % i;
		a[num] += 1;
		div /= i;
	}
	for(i = 0; i < 10; ++i) {
		printf("%d\n", a[i]);
		;
	}
	return 0;
}
