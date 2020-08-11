#include <iostream>

using namespace std;

int main()
{
	int s[100], order[100];
	int n, cnt = 1, tmp;
	
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> order[i];
		s[i] = cnt++;
	}
	
	for(int i = 0; i < n; ++i) {
		int j = i;
		while(order[i] > 0) {
			tmp = s[j];
			s[j] = s[j - 1];
			s[j - 1] = tmp;
			--j;
			--order[i];
		}
	} 
	
	for(int i = 0; i < n; ++i)
		cout << s[i] << ' ';
	return 0;
}
