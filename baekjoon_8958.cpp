#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n, score[100] = { 0, }, cnt;
	char result[80];

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> result;
		cnt = 1;

		for (int j = 0; j < strlen(result); ++j) {
			if (result[j] == 'O')
				score[i] += cnt++;
			else
				cnt = 1;
		}
	}

	for (int i = 0; i < n; ++i)
		cout << score[i] << '\n';

	return 0;
}
