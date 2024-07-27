using System.IO;

StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int x = 0;
            int y = int.MaxValue;

            int[] n = Array.ConvertAll(r.ReadLine().Split(), int.Parse);
            Array.Sort(n);

            for (int i = 1; i <= n[0]; ++i)
            {
                if (n[0] % i == 0 && n[1] % i == 0)
                {
                    x = i;
                }
            }

            for (int i = 1; i <= n[1]; ++i)
            {
                int a = n[0] * i;

                for (int j = 1; j <= n[0]; ++j)
                {
                    int b = n[1] * j;

                    if (a == b && y > b)
                        y = b;
                }
            }

            Console.WriteLine(x);
            Console.WriteLine(y);

            r.Close();
            w.Close();