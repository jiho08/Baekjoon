#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, count = 0;
	cin >> n;

	bool r[250000] = {};

	for (int i = 1; i <= 500; ++i)
		r[i * i - 1] = true;

	for (int i = 1; i <= 500; ++i)
		if (i * i - n > 0 && r[i * i - n - 1])
			++count;

	cout << count;
}