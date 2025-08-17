#include <iostream>
#include <vector>

using namespace std;

void recursion(const vector<vector<int>>& paper, const int x, const int y, int& white, int& blue, const int n)
{
	int wCnt = 0, bCnt = 0;

	for (int i = y; i < n + y; ++i)
		for (int j = x; j < n + x; ++j)
			++(paper[i][j] == 0 ? wCnt : bCnt);

	if (wCnt == 0)
	{
		++blue;
		return;
	}

	if (bCnt == 0)
	{
		++white;
		return;
	}

	const int half = n / 2;

	recursion(paper, x, y, white, blue, half);
	recursion(paper, x, y + half, white, blue, half);
	recursion(paper, x + half, y, white, blue, half);
	recursion(paper, x + half, y + half, white, blue, half);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, white = 0, blue = 0;
	cin >> n;

	vector paper(n, vector<int>(n));

	for (auto& v : paper)
		for (int& i : v)
			cin >> i;

	recursion(paper, 0, 0, white, blue, n);

	cout << white << '\n' << blue;
}