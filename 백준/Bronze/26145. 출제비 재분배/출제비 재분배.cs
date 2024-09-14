StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

            int[] o = Array.ConvertAll(r.ReadLine().Split(), int.Parse);
            int[] s = Array.ConvertAll(r.ReadLine().Split(), int.Parse);

            int[] m = new int[o[0] + o[1]];
            int[,] f = new int[o[0], o[0] + o[1]];

            for (int i = 0; i < o[0]; ++i)
                m[i] = s[i];

            for (int i = 0; i < o[0]; ++i)
            {
                int[] x = Array.ConvertAll(r.ReadLine().Split(), int.Parse);

                for (int j = 0; j < o[0] + o[1]; ++j)
                    f[i, j] = x[j];
            }

            for (int i = 0; i < o[0]; ++i)
                for (int j = 0; j < o[0] + o[1]; ++j)
                {
                    m[i] -= f[i, j];
                    m[j] += f[i, j];
                }

            for (int i = 0; i < o[0] + o[1]; ++i)
                w.Write($"{m[i]} ");

            w.Close();
            r.Close();