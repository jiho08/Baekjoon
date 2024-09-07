int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int[,] a = new int[r[0], r[1]];
            int[,] b = new int[r[0], r[1]];

            for (int i = 0; i < r[0]; ++i)
            {
                int[] t = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                for (int j = 0; j < r[1]; ++j)
                    a[i, j] = t[j];
            }

            for (int i = 0; i < r[0]; ++i)
            {
                int[] t = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                for (int j = 0; j < r[1]; ++j)
                    b[i, j] = t[j];
            }

            for (int i = 0; i < r[0]; ++i)
            {
                for (int j = 0; j < r[1]; ++j)
                    Console.Write($"{a[i, j] + b[i, j]} ");

                Console.WriteLine();
            }