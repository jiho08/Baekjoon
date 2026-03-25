#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    long long n;
    int m;
    cin >> n >> m;

    if (n >= m)
	{
        cout << 0;
        return 0;
    }

    long long ans = 1;

    for (long long i = n; i > 0; --i)
        ans = (ans * i) % m;

    cout << ans;
}