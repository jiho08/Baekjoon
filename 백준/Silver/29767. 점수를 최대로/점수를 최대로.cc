#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        
        if (i > 0)
            v[i] += v[i - 1];
    }

    sort(v.begin(), v.end(), greater<>());

    long long ans = 0;
    
    for (int i = 0; i < k; ++i)
        ans += v[i];

    cout << ans;
}