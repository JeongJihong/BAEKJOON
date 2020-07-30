#include <iostream>

using namespace std;

int main()
{
	int A[10], remain[10], cnt = 0;
	
	for(int i = 0; i < 10; ++i) {
		cin >> A[i];
		remain[i] = A[i] % 42;
	}
	
	for(int i = 0; i < 9; ++i) {
		for(int j = i + 1; j < 10; ++j) {
			if(remain[i] == remain[j])
				break;
			if(j == 9) 
				++cnt;
		}
	}
	cout << cnt + 1;
}
