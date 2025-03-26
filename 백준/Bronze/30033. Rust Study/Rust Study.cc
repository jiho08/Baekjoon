#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, c = 0;
	cin >> n;

	vector<int> a(n), b(n);

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	for (int i = 0; i < n; ++i)
		cin >> b[i];

	for (int i = 0; i < n; ++i)
		if (b[i] >= a[i])
			++c;

	cout << c;
}