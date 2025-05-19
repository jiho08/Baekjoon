#include <algorithm>
#include <iostream>

using namespace std;

int calculate(const int a, const int b, const char x)
{
	switch (x)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b, c;
	char x, y;
	cin >> a >> x >> b >> y >> c;

	const int sum1 = calculate(calculate(a, b, x), c, y);
	const int sum2 = calculate(a, calculate(b, c, y), x);

	cout << min(sum1, sum2) << '\n' << max(sum1, sum2);
}