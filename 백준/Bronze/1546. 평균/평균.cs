float n = int.Parse(Console.ReadLine());
            float[] g = Array.ConvertAll(Console.ReadLine().Split(), float.Parse);
            Array.Sort(g);
            float m = g[g.Length - 1];
            float[] ng = new float[g.Length];
            float av = 0;
            for (int i = 0; i < g.Length; i++)
            {
                ng[i] = g[i] / m * 100;
            }
            for (int i = 0; i < g.Length; i++)
            {
                av += ng[i];
            }
            Console.WriteLine(av / g.Length);