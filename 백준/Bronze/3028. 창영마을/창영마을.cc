#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector v(3, false);
	v[0] = true;

	for (const char c : s)
		if (c == 'A')
		{
			const bool t = v[0];
			v[0] = v[1];
			v[1] = t;
		} 
		else if (c == 'B')
		{
			const bool t = v[1];
			v[1] = v[2];
			v[2] = t;
		}
		else if (c == 'C')
		{
			const bool t = v[0];
			v[0] = v[2];
			v[2] = t;
		}

	for (int i = 0; i < 3; ++i)
		if (v[i])
			cout << i + 1;
}