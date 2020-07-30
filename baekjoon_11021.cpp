#include <iostream>

using namespace std;

int main(void)
{
	int T, a, b, ans[256];
	scanf("%d", &T);
	
	for (int i = 0; i < T; ++i) {
		scanf("%d%d", &a, &b);
		ans[i] = a + b;
	}
	
	for (int i = 0; i < T; ++i) {
		printf("Case #%d: %d\n", i+1, ans[i]);
	}
	
	return 0;
}
