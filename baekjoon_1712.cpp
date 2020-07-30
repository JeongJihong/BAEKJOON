#include <iostream>

using namespace std;

int main()
{
	int A, B, C, point = 0;
	cin >> A >> B >> C;
	
	if(B >= C)
		cout << -1;
	else {
		while (A + B * point >= C * point)
			++point;
		cout << point << '\n';
	}
	return 0;
}
