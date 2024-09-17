string[] a = Console.ReadLine().Split();
            string[] b = Console.ReadLine().Split();

            long n = long.Parse(a[0]), m = long.Parse(a[1]);
            int t = int.Parse(b[0]), s = int.Parse(b[1]);
            long x, y, p;

            p = n % 8 == 0 ? n / 8 - 1 : n / 8;
            x = n + p * s;

            p = m % 8 == 0 ? m / 8 - 1 : m / 8;
            y = m + p * s + p * 2 * t + t;

            Console.Write(x > y ? "Dok\n" + y : "Zip\n" + x);