#include <iostream>

using namespace std;

int main()
{
	int n = 0, new_num = -1;
	int n10 = 0, n1 = 0, tmp = 0, cnt = 0;
	cin >> n;

	while (n != new_num) {
		if (cnt == 0)
			new_num = n;

		n10 = new_num / 10;
		n1 = new_num % 10;

		tmp = (n10 + n1) % 10;
		new_num = n1 * 10 + tmp;
		++cnt;
	}
	cout << cnt;

	return 0;
}