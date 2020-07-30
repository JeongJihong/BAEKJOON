#include <stdio.h>

int main()
{
	int c, n[100], cnt[1000] = { 0, };
	double score[1000], avg[1000] = { 0, };

	scanf("%d", &c);
	for (int i = 0; i < c; ++i) {
		scanf("%d", &n[i]);
		for (int j = 0; j < n[i]; ++j) {
			scanf("%lf", &score[j]);
			avg[i] += score[j];
		}
		avg[i] /= n[i];

		for (int j = 0; j < n[i]; ++j) {
			if (score[j] > avg[i])
				++cnt[i];
		}
	}

	for (int i = 0; i < c; ++i) {
		printf("%.3lf%%\n", (double)cnt[i] / n[i] * 100);
	}

	return 0;
}
