#include <string>
#include <vector>

using namespace std;

string table[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int solution(string s)
{
	int answer = 0;
	string str = "";
	string q = "";

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
			str += s[i];
		else
		{
			q += s[i];

			for (int j = 0; j < 10; ++j)
			{
				if (q == table[j])
				{
					str += to_string(j);
					q = "";
				}
			}
		}
	}
	answer = stoi(str);

	return answer;
}