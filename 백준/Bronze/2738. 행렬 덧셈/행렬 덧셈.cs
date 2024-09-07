StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

            int[] v = Array.ConvertAll(r.ReadLine().Split(), int.Parse);

            int[,] a = new int[v[0], v[1]];

            for (int i = 0; i < v[0]; ++i)
            {
                int[] t = Array.ConvertAll(r.ReadLine().Split(), int.Parse);

                for (int j = 0; j < v[1]; ++j)
                    a[i, j] = t[j];
            }

            for (int i = 0; i < v[0]; ++i)
            {
                int[] t = Array.ConvertAll(r.ReadLine().Split(), int.Parse);

                for (int j = 0; j < v[1]; ++j)
                    a[i, j] += t[j];
            }

            for (int i = 0; i < v[0]; ++i)
            {
                for (int j = 0; j < v[1]; ++j)
                    w.Write($"{a[i, j]} ");

                w.WriteLine();
            }

            w.Close();
            r.Close();