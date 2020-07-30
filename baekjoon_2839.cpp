#include <iostream>

using namespace std;

int main(void)
{
	int i, j, N, n, three, five, sugar;
	bool exitOuterLoop = false;
	cin >> N;
	n = N / 3 + 1;
	
	for(i = 0; i < n; ++i) {
		for(j = 0; j < n; ++j) {
			sugar = i * 3 + j * 5;
			if(sugar == N) {
				three = i;
				five = j;
				exitOuterLoop = true;
				break;
			}
		}
		if(exitOuterLoop == true)
			break;
	}
	if(i == n && j == n)
		cout << -1;
	else
		cout << three + five;
	return 0;
}
