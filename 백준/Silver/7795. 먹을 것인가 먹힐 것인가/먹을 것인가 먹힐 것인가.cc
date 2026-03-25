#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
	int t;
	cin >> t;

	while (t--)
	{
		int n, m, count = 0;
		cin >> n >> m;

		vector<int> a(n), b(m);

		for (int& i : a)
			cin >> i;

		for (int& i : b)
			cin >> i;

		sort(b.begin(), b.end());

		for (int& i : a)
			count += lower_bound(b.begin(), b.end(), i) - b.begin();

		cout << count << '\n';
	}
}