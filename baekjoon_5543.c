#include <stdio.h>

int main()
{
	int ham[3], soda[2], ham_min = 9999, soda_min = 9999;
	int i;
	for(i = 0; i < 3; ++i) {
		scanf("%d", &ham[i]);
		if(ham[i] < ham_min)
			ham_min = ham[i];
	}
		
	for(i = 0; i < 2; ++i) {
		scanf("%d", &soda[i]);
		if(soda[i] < soda_min)
			soda_min = soda[i];
	}
	printf("%d", ham_min + soda_min - 50);
	return 0;
	
}
