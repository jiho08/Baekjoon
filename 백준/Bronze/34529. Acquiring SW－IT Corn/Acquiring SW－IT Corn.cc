#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int x, y, z, u, v, w;
	cin >> x >> y >> z >> u >> v >> w;
	cout << u / 100 * x + v / 50 * y + w / 20 * z;
}