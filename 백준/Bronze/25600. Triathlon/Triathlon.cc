#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, highScore = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int a, d, g;
		cin >> a >> d >> g;

		int score = a * (d + g);

		if (a == d + g)
			score *= 2;

		if (score > highScore)
			highScore = score;
	}

	cout << highScore;
}