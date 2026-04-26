#include <iostream>
#include <vector>

using namespace std;

vector<string> v;
const vector<string> tri =
{
	"  *  ",
	" * * ",
	"*****"
};

void triangle(const int x, const int y, const int n)
{
	if (n == 3)
	{
		for (int i = 0; i < 3; ++i)
			for (int j = 0; j < 5; ++j)
				if (tri[i][j] == '*')
					v[i + x][j + y - 2] = '*';

		return;
	}

	const int t = n / 2;

	triangle(x, y, t);
	triangle(x + t, y - t, t);
	triangle(x + t, y + t, t);
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	v = vector(n, string(2 * n - 1, ' '));

	triangle(0, n - 1, n);

	for (const auto& s : v)
		cout << s << '\n';
}