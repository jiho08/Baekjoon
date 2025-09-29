#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, ans = 0;
	cin >> n >> m;

	int cm = m;
	queue<int> q;

	if (n != 0)
		++ans;

	while (n--)
	{
		int h;
		cin >> h;
		q.push(h);
	}

	while (!q.empty())
	{
		const int f = q.front();
		q.pop();

		if (cm >= f)
			cm -= f;
		else
		{
			++ans;
			cm = m - f;
		}
	}

	cout << ans;
}