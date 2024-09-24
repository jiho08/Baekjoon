#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n, m, s = 0;
	cin >> n >> m;

	int* r = new int[n];

	for (int i = 0; i < n; ++i)
		cin >> r[i];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (i == j)
				continue;

			if (r[i] == -1 || r[j] == -1)
				continue;

			if (r[i] + r[j] != m)
				continue;

			++s;
			r[i] = -1;
			r[j] = -1;
		}

	cout << s;

	return 0;
}