#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	float sum = 0.f, totalScore = 0.f;

	for (int i = 0; i < 20; ++i)
	{
		string subject, grade;
		float score;
		cin >> subject >> score >> grade;

		totalScore += score;

		if (grade == "A+")
			sum += score * 4.5f;
		else if (grade == "A0")
			sum += score * 4.f;
		else if (grade == "B+")
			sum += score * 3.5f;
		else if (grade == "B0")
			sum += score * 3.f;
		else if (grade == "C+")
			sum += score * 2.5f;
		else if (grade == "C0")
			sum += score * 2.f;
		else if (grade == "D+")
			sum += score * 1.5f;
		else if (grade == "D0")
			sum += score * 1.f;
		else if (grade == "P")
			totalScore -= score;
	}

	cout << fixed;
	cout.precision(6);
	cout << sum / totalScore;
}