int n = int.Parse(Console.ReadLine());
            int m = int.Parse(Console.ReadLine());

            int[] r = { int.MaxValue, int.MaxValue, int.MaxValue, int.MaxValue, int.MaxValue };
            int t = int.MaxValue;

            if (n >= 20)
                r[0] = m - (m / 4);

            if (n >= 15)
                r[1] = m - 2000;

            if (n >= 10)
                r[2] = m - (m / 10);

            if (n >= 5)
                r[3] = m - 500;

            r[4] = m;

            foreach (int i in r)
                if (i < t)
                    t = i;

            Console.Write(t > 0 ? t : 0);