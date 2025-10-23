#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int hp, mp, atk, def, h, m, a, d;
		cin >> hp >> mp >> atk >> def >> h >> m >> a >> d;

		hp += h;
		mp += m;
		atk += a;
		def += d;

		hp = max(hp, 1);
		mp = max(mp, 1);
		atk = max(atk, 0);

		cout << 1 * hp + 5 * mp + 2 * atk + 2 * def << '\n';
	}
}