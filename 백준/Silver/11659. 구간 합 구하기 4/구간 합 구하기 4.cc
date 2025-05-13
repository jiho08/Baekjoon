#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, sum = 0;
    cin >> n >> m;

    vector<int> v(n + 1);

    v[0] = sum;

    for (int i = 1; i <= n; ++i)
    {
        int t;
        cin >> t;
        sum += t;
        v[i] = sum;
    }

    while (m--)
    {
        int i, j;
        cin >> i >> j;
        cout << v[j] - v[i - 1] << '\n';
    }
}