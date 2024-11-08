#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	for (int i = 0; i < 3; ++i)
	{
		int sh, sm, ss, eh, em, es, m, s;
		cin >> sh >> sm >> ss >> eh >> em >> es;

		if (es < ss)
		{
			s = es + 60 - ss;
			em--;
		}
		else
			s = es - ss;

		if (em < sm)
		{
			m = em + 60 - sm;
			eh--;
		}
		else
			m = em - sm;

		int h = eh - sh;

		cout << h << ' ' << m << ' ' << s << '\n';
	}
}