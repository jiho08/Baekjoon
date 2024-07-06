int n = int.Parse(Console.ReadLine());
            int r = 0;
            int i;

            for (i = 1; i <= n; ++i)
            {
                r = 0;
                int s = i;

                while (s != 0)
                {
                    r += s % 10;
                    s /= 10;
                }

                if (i + r == n)
                {
                    Console.WriteLine(i);
                    break;
                }
            }

            if (i + r != n)
            {
                Console.WriteLine(0);
            }