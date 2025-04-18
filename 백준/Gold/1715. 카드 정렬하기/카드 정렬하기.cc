#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 0, t;
	cin >> n;

	priority_queue<int> q;

	while (n--)
	{
		cin >> t;
		q.push(-t);
	}

	while (q.size() > 1)
	{
		const int fir = q.top();
		q.pop();
		const int sec = q.top();
		q.pop();

		s += -fir + -sec;
		q.push(fir + sec);
	}

	cout << s;
}