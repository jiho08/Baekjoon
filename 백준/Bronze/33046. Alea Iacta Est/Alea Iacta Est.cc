#include <iostream>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	char r[4] = { '1','2','3','4' };
	int a, b, c, d, s = 0;
	cin >> a >> b >> c >> d;

	for (int i = 0; i < a + b + c + d; ++i)
		++s;

	cout << r[(s - 2) % 4];
}