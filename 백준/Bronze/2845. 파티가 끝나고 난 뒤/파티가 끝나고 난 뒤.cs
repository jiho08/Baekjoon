int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] p = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int m = n[0] * n[1];
            for (int i = 0; i < p.Length; i++)
            {
                p[i] = p[i] - m;
                Console.Write($"{p[i]} ");
            }