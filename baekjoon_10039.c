#include <stdio.h>

int main(void)
{
	int a[5], avg = 0;
	int i;
	
	for(i = 0; i < 5; ++i) {
		scanf("%d", &a[i]);
		if(a[i] < 40)
			a[i] = 40;
	}
	for(i = 0; i < 5; ++i)
		avg += a[i];
	avg /= 5;
	printf("%d", avg);
	return 0;
}
