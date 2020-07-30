#include <iostream>

using namespace std;

int main(void)
{
	int T, a[256], b[256], ans[256];
	scanf("%d", &T);
	
	for (int i = 0; i < T; ++i) {
		scanf("%d%d", &a[i], &b[i]);
		ans[i] = a[i] + b[i];
	}
	
	for (int i = 0; i < T; ++i) {
		printf("Case #%d: %d + %d = %d\n", i+1, a[i], b[i], ans[i]);
	}
	
	return 0;
}
