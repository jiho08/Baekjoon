#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t, s = 0;
	cin >> t;
	vector<int> r(t);

	for (int i = 0; i < t; ++i)
		cin >> r[i];

	if (r[0] > r[2])
		s += (r[0] - r[2]) * 508;
	else
		s += (r[2] - r[0]) * 108;

	if (r[1] > r[3])
		s += (r[1] - r[3]) * 212;
	else
		s += (r[3] - r[1]) * 305;

	if (r.size() == 5)
		s += r[4] * 707;

	cout << s * 4763;
}