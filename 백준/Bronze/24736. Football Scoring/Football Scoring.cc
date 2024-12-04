#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int v[5], h[5];

	for (int i = 0; i < 5; ++i)
		cin >> v[i];

	for (int i = 0; i < 5; ++i)
		cin >> h[i];

	cout << v[0] * 6 + v[1] * 3 + (v[2] + v[4]) * 2 + v[3] * 1 << '\n'
	<< h[0] * 6 + h[1] * 3 + (h[2] + h[4]) * 2 + h[3] * 1;
}