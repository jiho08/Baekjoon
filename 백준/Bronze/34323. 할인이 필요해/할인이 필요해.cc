#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    long long n, m, s;
    cin >> n >> m >> s;

    long long x = s * m;
    long long y = (s * (m + 1) * (100 - n)) / 100;

    cout << min(x, y);
}