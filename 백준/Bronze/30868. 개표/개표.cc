#include <iostream>
#include <vector>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	vector<int> n(t);

	for (int i = 0; i < t; ++i)
		cin >> n[i];

	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < n[i] / 5; ++j)
			cout << "++++ ";

		for (int j = 0; j < n[i] % 5; ++j)
			cout << '|';

		cout << '\n';
	}
}