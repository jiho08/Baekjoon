#include <algorithm>
#include <iostream>

using namespace std;

int BinarySearch(int* arr, int t, int n)
{
	int left = 0, right = n - 1, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (arr[mid] == t)
			return 1;

		arr[mid] < t ? left = mid + 1 : right = mid - 1;
	}

	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n;

	int* a = new int[n];

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	cin >> m;

	int* b = new int[m];

	for (int i = 0; i < m; ++i)
		cin >> b[i];

	sort(a, a + n);

	for (int i = 0; i < m; ++i)
		cout << BinarySearch(a, b[i], n) << '\n';

	delete[] a;
	delete[] b;
}