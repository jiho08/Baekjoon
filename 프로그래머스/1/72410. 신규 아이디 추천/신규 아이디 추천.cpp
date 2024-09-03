#include <string>
#include <vector>

using namespace std;
string ch = "~!@#$%^&*()=+[{]}:?,<>/";

void Level1(string& answer)
{
	for (int i = 0; i < answer.length(); ++i)
	{
		if (answer[i] >= 65 && answer[i] <= 90)
		{
			answer[i] += 32;
		}
	}
}

void Level2(string& answer)
{
	for (int i = 0; i < answer.size(); i++)
	{
		for (auto c : ch)
		{
			if (answer[i] == c)
			{
				answer.erase(i, 1);
                i--;
				continue;
			}
		}
	}
}

void Level3(string& answer)
{
	for (int i = 0; i < answer.size() - 1; i++)
	{
		if (answer[i] == '.' && answer[i] == answer[i + 1])
		{
			answer.erase(i, 1);
			i--;
		}
	}
}

void Level4(string& answer)
{
	if (answer.back() == '.') {
		answer.pop_back();
	}
	if (answer.front() == '.')
	{
		answer.erase(0, 1);
	}
}

void Level5(string& answer)
{
	if (answer.empty())
	{
		answer = "a";
	}
}

void Level6(string& answer)
{
	if (answer.size() > 15) {
		answer.erase(15);
		if (answer.back() == '.') {
			answer.pop_back();
		}
	}
}

string Level7(string& answer)
{
	while (answer.size() < 3)
	{
		answer += answer[answer.size() - 1];
	}

	return answer;
}
string solution(string new_id) {
    string answer = "";
    Level1(new_id);
    Level2(new_id);
    Level3(new_id);
    Level4(new_id);
    Level5(new_id);
    Level6(new_id);
    answer = Level7(new_id);
    
    return answer;
}