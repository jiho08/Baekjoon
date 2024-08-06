int t = int.Parse(Console.ReadLine());
            int[,] r = new int[15, 15];

            for (int i = 1; i < 15; ++i)
                r[0, i] = i;

            for (int i = 1; i < 15; ++i)
                r[i, 1] = 1;

            for (int i = 1; i < 15; ++i)
                for (int j = 1; j < 15; ++j)
                    r[i, j] = r[i - 1, j] + r[i, j - 1];

            for (int i = 0; i < t; ++i)
            {
                int a = int.Parse(Console.ReadLine());
                int b = int.Parse(Console.ReadLine());

                Console.WriteLine(r[a,b]);
            }