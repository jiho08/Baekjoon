#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Compare
{
	bool operator()(const int a, const int b) const
	{
		if (abs(a) == abs(b))
			return a > b;

		return abs(a) > abs(b);
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	priority_queue<int, vector<int>, Compare> pq;

	while (n--)
	{
		int x;
		cin >> x;

		if (x == 0)
		{
			if (pq.empty())
				cout << "0\n";
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}

			continue;
		}

		pq.push(x);
	}
}