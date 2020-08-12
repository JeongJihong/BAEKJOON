#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int height[9], seven[7], sum = 0, ans = 0, i = 0, j = 0, exit = 0;
	int index = 0;
	
	for(int i = 0; i < 9; ++i) {
		cin >> height[i];
		sum += height[i];
	}
	
	for(i = 0; i < 8; ++i) {
		for(j = i + 1; j < 9; ++j) {
			ans = sum - height[i] - height[j];
			if(ans == 100) {
				exit = 1;
				break;
			}
		}
		if(exit == 1)
			break;
	}
	for(int k = 0; k < 9; ++k) {
		if(k != i && k != j) {
			seven[index++] = height[k];
		}
	}
	sort(seven, seven + 7);
	
	for(int i = 0; i < 7; ++i) {
		cout << seven[i] << endl;
	}
	return 0;
	
}
