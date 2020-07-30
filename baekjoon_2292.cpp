#include <iostream>

using namespace std;

int main(void)
{
	int i, N, room, cnt = 0;
	cin >> N;
	room = 1;
	i = 1;
	while (room < N) {
		++cnt;
		room = room + i++ * 6;
	}
	cout << cnt + 1;

	return 0;
}
