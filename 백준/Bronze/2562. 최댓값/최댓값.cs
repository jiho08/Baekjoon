int m = 0;
            int[] b = new int[9];
            int mn = 0;
            for (int i = 0; i < 9; i++)
            {
                int a = int.Parse(Console.ReadLine());
                b[i] = a;
                if (b[i] > m)
                {
                    m = b[i];
                }
                if (b[i] == m)
                {
                    mn = i + 1;
                }
            }
            Array.Sort(b);
            Console.WriteLine(m);
            Console.WriteLine(mn);