int t = int.Parse(Console.ReadLine());
            int score = 0;
            int continuityScore = 0;
            for (int i = 0; i < t; i++)
            {
                string ox = Console.ReadLine();
                for (int j = 0; j < ox.Length; j++)
                {
                    if (ox[j] == 'O')
                    {
                        continuityScore++;
                        score += continuityScore;
                    }
                    else
                    {
                        continuityScore = 0;
                    }
                }
                Console.WriteLine(score);
                score = 0;
                continuityScore = 0;
            }