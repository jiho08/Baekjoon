int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++)
            {
                string[] rs = Console.ReadLine().Split();
                int n = int.Parse(rs[0]);
                for (int j = 0; j < rs[1].Length; j++)
                {
                    for (int k = 0; k < n; k++)
                    {
                        Console.Write(rs[1][j]);
                    }
                }
                Console.WriteLine("");
            }