#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<string> arr(n);

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	sort(arr.begin(), arr.end(), [](const string& a, const string& b)
		{
			if (a.size() != b.size())
				return a.size() < b.size();

			return a < b;
		});

	for (const string& t : arr)
		cout << t << '\n';
}