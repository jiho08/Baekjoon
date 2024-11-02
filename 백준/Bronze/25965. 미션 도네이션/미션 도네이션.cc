#include <iostream>
using namespace std;

long long r[100][3];
long long k, d, a;

void solve() {
	long long s = 0;
	
	int m; cin >> m;
	for (int i = 0; i < m; ++i)
        cin >> r[i][0] >> r[i][1] >> r[i][2];
	
	cin >> k >> d >> a;

	for (int i = 0; i < m; i++)
        s += max(r[i][0] * k - r[i][1] * d + r[i][2] * a, 0LL);

	cout << s << '\n';
}

int main() {
	ios::sync_with_stdio(0);

	int n; cin >> n;
	while (n--)
        solve();
}