#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, max = 0, index, a[9];
	
	for(i = 0; i < 9 && scanf("%d", &a[i]); ++i) {
		if(max < a[i]) {
			max = a[i];
			index = i;
		}
	}
	printf("%d\n", max);
	printf("%d", index + 1);
	return 0;
}
