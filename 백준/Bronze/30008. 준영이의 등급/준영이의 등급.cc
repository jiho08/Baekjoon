#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<int> g(k);

	for (int i = 0; i < k; ++i)
		cin >> g[i];

	for (int i = 0; i < k; ++i)
	{
		const int p = g[i] * 100 / n;

		if (p < 5)
			cout << "1 ";
		else if (p < 12)
			cout << "2 ";
		else if (p < 24)
			cout << "3 ";
		else if (p < 41)
			cout << "4 ";
		else if (p < 61)
			cout << "5 ";
		else if (p < 78)
			cout << "6 ";
		else if (p < 90)
			cout << "7 ";
		else if (p < 97)
			cout << "8 ";
		else
			cout << "9 ";
	}
}