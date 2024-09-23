#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines)
{
	int answer = 0;
	int c[200] = {};

	for (int i = 0; i < 3; ++i)
		for (int j = lines[i][0]; j < lines[i][1]; ++j)
			++c[j + 100];

	for (int i = 0; i < 200; ++i)
		if (c[i] > 1)
			++answer;

	return answer;
}