#include <iostream>

using namespace std;

int main()
{
	float t;
	cin >> t;

	t /= 2.0f;

	cout << (int)(t * t + 0.5);
}