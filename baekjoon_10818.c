#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, i, max, min = 0;
	
	scanf("%d", &n);
	scanf("%d", &m);
	max = min = m;
	for(i = 0; i < n - 1 && scanf("%d", &m); ++i) {
		if(max < m) 
			max = m;
		if(min > m)
			min = m;
	}
	printf("%d %d", min, max);
	return 0;
}
