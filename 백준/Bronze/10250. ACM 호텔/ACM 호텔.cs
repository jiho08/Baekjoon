int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++)
            {
                int[] g = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int f = (g[2] % g[0] == 0) ? g[0] : g[2] % g[0];
                int r = (g[2] % g[0] == 0) ? g[2] / g[0] : g[2] / g[0] + 1;
                Console.WriteLine($"{f}{r.ToString("00")}");
            }