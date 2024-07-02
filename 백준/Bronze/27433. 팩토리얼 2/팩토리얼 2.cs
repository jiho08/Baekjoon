long n = long.Parse(Console.ReadLine());
            long s = 1;

            for (int i = 1; i <= n; i++)
            {
                s *= i;
            }

            Console.Write(s);