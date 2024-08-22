int n = int.Parse(Console.ReadLine()), s = 0;
            int[] a = new int[n];

            for (int i = 0; i < n; ++i)
                a[i] = int.Parse(Console.ReadLine());

            int m = int.Parse(Console.ReadLine());
            int[] b = new int[m];

            for (int i = 0; i < m; ++i)
                b[i] = int.Parse(Console.ReadLine());

            for (int i = 1; i <= m; ++i)
            {
                s += a[b[i - 1] - 1];
            }

            Console.Write(s);