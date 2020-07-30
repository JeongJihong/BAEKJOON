#include <stdio.h>

int main()
{
	int num[3];
	int i, j, tmp;
	for(i = 0; i < 3; ++i) 
		scanf("%d", &num[i]);
		
	for(i = 0; i < 2; ++i) {
		for(j = 1; j < 3; ++j) {
			if(num[i] < num[j]) {
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	
	printf("%d", num[1]);
	return 0;
	
}
