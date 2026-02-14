#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    int m, seed, x1, x2;
    cin >> m >> seed >> x1 >> x2;

    for (int a = 0; a < m; ++a)
        for (int c = 0; c < m; ++c)
            if ((a * seed + c) % m == x1 && (a * x1 + c) % m == x2)
            {
                cout << a << ' ' << c;
                return 0;
            }
}