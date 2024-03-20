int[] nm = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int n = nm[0];
            int m = nm[1];
            int h = 0;
            int[] t = new int [n];
            for (int a = 1; a <= n; a++)
            {
                t[a - 1] = a;
            }
            for (int b = 0; b < m; b++)
            {
                int[] ij = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int i = ij[0];
                int j = ij[1];
                h = t[i - 1];
                t[i - 1] = t[j - 1];
                t[j - 1] = h;
            }
            for (int c = 0; c < n; c++)
            {
                Console.Write($"{t[c]} ");
            }