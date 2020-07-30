#include <iostream>

using namespace std;

int main(void)
{
	int first, second, second_val[3], final;
	
	cin >> first >> second;
	final = first * second;
	
	for(int i = 0; i < 3; ++i) {
		second_val[i] = second % 10;
		second /= 10; 
		cout << first * second_val[i] << endl;
	}
	cout << final;
	
	return 0;
}
