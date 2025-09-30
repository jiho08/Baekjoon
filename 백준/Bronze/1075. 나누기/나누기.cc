#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    long long n;
    int f;
    cin >> n >> f;

    const long long base = n - (n % 100);

    int ans = 0;

    for (int i = 0; i < 100; ++i)
        if ((base + i) % f == 0)
        {
            ans = i;
            break;
        }

    cout << (ans < 10 ? "0" : "") << ans << '\n';
}