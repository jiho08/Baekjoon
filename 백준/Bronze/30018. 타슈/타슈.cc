#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, count = 0;
	cin >> n;

	vector<int> a(n), b(n);

	for (int& i : a)
		cin >> i;

	for (int& i : b)
		cin >> i;

	for (int i = 0; i < n; ++i)
		count += abs(a[i] - b[i]);

	cout << count / 2;
}