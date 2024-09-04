#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, P; cin >> N >> P;
	int ans = P;
	if (N >= 5) ans = min(ans, P - 500);
	if (N >= 10) ans = min(ans, P / 10 * 9);
	if (N >= 15) ans = min(ans, P - 2000);
	if (N >= 20) ans = min(ans, P / 4 * 3);

	cout << max(ans, 0);
}