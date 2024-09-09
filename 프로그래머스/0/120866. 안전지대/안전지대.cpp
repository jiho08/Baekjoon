#include <iostream>
#include <string>
#include <vector>

using namespace std;


// board_rows는 2차원 배열 board의 행 길이, board_cols는 2차원 배열 board의 열 길이입니다.
int solution(vector<vector<int>> board)
{
	int answer = 0;
	int dx[] = { -1, -1, 0, 1, 1, 1, 0, -1 };
	int dy[] = { 0, 1, 1, 1, 0, -1, -1, -1 };


	for (int i = 0; i < board.size(); ++i)
	{
		for (int j = 0; j < board.size(); ++j)
		{
			int safezone = 1;

			if (board[i][j] == 1)
				safezone = 0;
			else
			{
				for (int k = 0; k < 8; ++k)
				{
					int nx = i + dx[k];
					int ny = j + dy[k];

					if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board.size())
					{
						if (board[nx][ny] == 1)
						{
							safezone = 0;
							break;
						}
					}
				}
			}

			answer += safezone;
		}
	}

	//for (int i = 0; i < board.size(); ++i)
		//for (int j = 0; j < board.size(); ++j)
			//if (board[i][j] == 1)
				//++answer;

	return answer;
}