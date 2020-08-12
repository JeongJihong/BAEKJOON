#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double diagonal, width, height, v;
	cin >> diagonal >> height >> width;
	
	v = sqrt(pow(diagonal, 2) / (pow(width, 2) + pow(height, 2)));
	cout << (int)(height * v) << ' ' << (int)(width * v);
	return 0;
}
