#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;

    for (int i = 2; i <= static_cast<int>(sqrt(n)); ++i)
        if (v[i])
            for (int j = i * i; j <= n; j += i)
                v[j] = false;

    for (int i = m; i <= n; ++i)
        if (v[i])
            cout << i << '\n';
}