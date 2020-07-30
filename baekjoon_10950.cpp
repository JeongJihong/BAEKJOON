#include <iostream>

using namespace std;

int main(void)
{
	int count, A, B, ANS[256];
	scanf("%d", &count);
	for (int i = 0; i < count; ++i) {
		scanf("%d%d", &A, &B);
		ANS[i] = A + B;
	}
	
	for (int i = 0; i < count; ++i)
		printf("%d\n", ANS[i]);

	return 0;
}
