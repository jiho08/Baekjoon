#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[3];
    int dpMax[3] = { 0 }, dpMin[3] = { 0 };

    for (int i = 0; i < n; ++i)
    {
        cin >> a[0] >> a[1] >> a[2];

        int prevMax[3] = { dpMax[0], dpMax[1], dpMax[2] };
        int prevMin[3] = { dpMin[0], dpMin[1], dpMin[2] };

        dpMax[0] = max(prevMax[0], prevMax[1]) + a[0];
        dpMax[1] = max({ prevMax[0], prevMax[1], prevMax[2] }) + a[1];
        dpMax[2] = max(prevMax[1], prevMax[2]) + a[2];

        dpMin[0] = min(prevMin[0], prevMin[1]) + a[0];
        dpMin[1] = min({ prevMin[0], prevMin[1], prevMin[2] }) + a[1];
        dpMin[2] = min(prevMin[1], prevMin[2]) + a[2];
    }

    cout << max({ dpMax[0], dpMax[1], dpMax[2] }) << ' ' << min({ dpMin[0], dpMin[1], dpMin[2] });
}