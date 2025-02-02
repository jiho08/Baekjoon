#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

    vector<pair<int, int>> r(n);

    for (int i = 0; i < n; ++i)
        cin >> r[i].first >> r[i].second;

    sort(r.begin(), r.end());

    for (int i = 0; i < n; ++i)
        cout << r[i].first << ' ' << r[i].second << '\n';
}