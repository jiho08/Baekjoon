StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int n = int.Parse(r.ReadLine()), i, j;
            int[] a = new int[10001];

            for (i = 0; i < n; ++i)
                a[int.Parse(r.ReadLine())]++;

            for (i = 0; i <= 10000; ++i)
            {
                if (a[i] != 0)
                {
                    for (j = 0; j < a[i]; ++j)
                        w.WriteLine(i);
                }
            }

            r.Close();
            w.Close();