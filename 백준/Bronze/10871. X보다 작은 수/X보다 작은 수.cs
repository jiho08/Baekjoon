int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] t = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            for (int i = 0; i < n[0]; i++)
            {
                if (t[i] < n[1])
                {
                    Console.Write($"{t[i]} ");
                }
            }