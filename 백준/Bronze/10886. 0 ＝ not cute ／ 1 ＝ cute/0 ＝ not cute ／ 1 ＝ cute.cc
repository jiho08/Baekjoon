#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, yes = 0, no = 0;
	cin >> n;

	int arr[100];

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	for (int i = 0; i < n; ++i)
		arr[i] == 1 ? ++yes : ++no;

	cout << (yes > no ? "Junhee is cute!" : "Junhee is not cute!");
}