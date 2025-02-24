#include <iostream>
using namespace std;

int N;
bool visited[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i < 10; i++) {
		visited[i] = 1;
		for (int j = 1; j < 10; j++) {
			visited[i * j] = 1;
		}
	}
	if (visited[N]) cout << 1;
	else cout << 0;
}