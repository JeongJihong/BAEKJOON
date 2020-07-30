#include <stdio.h>

int main(void)
{
	int A, B, i = 0, j = 0;
	int ans[256];
	while(scanf("%d%d", &A, &B) == 2 && A != 0 && B != 0) {
		ans[i++] = A + B;
	}
	while(j < i)
		printf("%d\n", ans[j++]);
	return 0;
}
