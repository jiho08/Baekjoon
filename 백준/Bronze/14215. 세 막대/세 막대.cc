#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	const int m = max({ a, b, c });
	const int s = a + b + c - m;

	cout << (s > m ? a + b + c : s + s - 1);
}