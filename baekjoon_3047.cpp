#include <iostream>

using namespace std;

int main()
{
	int num[3], tmp = 0;
	char order[3];
	
	for(int i = 0; i < 3; ++i)
		cin >> num[i];
	getchar();
	for(int i = 0; i < 3; ++i) {
		order[i] = getchar();
		order[i] -= 'A';
	}
	
	for(int i = 0; i < 2; ++i) {
		for(int j = i; j < 3; ++j) {
			if(num[i] > num[j]) {
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for(int i = 0; i < 3; ++i) {
		cout << num[order[i]] << ' ';
	}
	return 0;
}
