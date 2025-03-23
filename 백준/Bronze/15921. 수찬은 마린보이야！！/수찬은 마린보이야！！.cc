#include <iostream>
#include <vector>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	if (n == 0)
	{
		cout << "divide by zero";
		return 0;
	}
	
	vector<float> v(n);
	vector<bool> p(n, false);
	float f = 0, s = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		f += v[i];
	}

	f /= n;

	for (int i = 0; i < n; ++i)
	{
		if (p[i])
			continue;

		float q = 0;

		for (int j = 0; j < n; ++j)
			if (v[i] == v[j])
				++q;

		s += v[i] * (q / static_cast<float>(n));

		for (int j = i; j < n; ++j)
			if (v[i] == v[j])
				p[j] = true;
	}

	cout << fixed;
	cout.precision(2);

	if (s == 0)
		cout << "divide by zero";
	else
		cout << f / s;
}