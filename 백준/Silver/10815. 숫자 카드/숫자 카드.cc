#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	unordered_set<int> s;

	while (n--)
	{
		int i;
		cin >> i;
		s.insert(i);
	}

	int m;
	cin >> m;

	while (m--)
	{
		int i;
		cin >> i;
		cout << (s.find(i) == s.end() ? "0 " : "1 ");
	}
}