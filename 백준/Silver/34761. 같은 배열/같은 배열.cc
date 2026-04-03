#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n), b(n * 2);

	for (int& i : a)
		cin >> i;

	for (int& i : b)
		cin >> i;

	for (int i = 0; i < n; ++i)
		if (a[i] != b[i])
		{
			cout << "NO";
			return 0;
		}

	vector<bool> v(n + 1);

	for (const int i : a)
		v[i] = true;

	for (int i = n; i < n * 2; ++i)
		if (!v[b[i]])
		{
			cout << "NO";
			return 0;
		}

	cout << "YES";
}