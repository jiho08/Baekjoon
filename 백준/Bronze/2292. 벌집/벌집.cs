int n = int.Parse(Console.ReadLine());
            int r = 2;
            int s = 6;
            int c = 1;

            for (int i = 1; i <= n; ++i)
            {
                if (i == r)
                {
                    ++c;
                    r += s;
                    s += 6;
                }
            }
            Console.Write(c);