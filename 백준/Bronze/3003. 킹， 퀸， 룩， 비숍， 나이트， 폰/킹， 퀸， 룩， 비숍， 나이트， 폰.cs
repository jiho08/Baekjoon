int[] w = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] n = { 1, 1, 2, 2, 2, 8 };
            for (int i = 0; i < 6; i++)
            {
                if (w[i] > n[i])
                {
                    w[i] = n[i] - w[i];
                }
                else if (w[i] < n[i])
                {
                    w[i] = n[i] - w[i];
                }
                else
                {
                    w[i] = 0;
                }
                Console.Write($"{w[i]} ");
            }