int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int n = int.Parse(Console.ReadLine());
            a[2] = a[2] + n;

            if (a[2] >= 60)
            {
                a[1] += a[2] / 60;
                a[2] = a[2] % 60;
            }
            if (a[1] >= 60)
            {
                a[0] += a[1] / 60;
                a[1] = a[1] % 60;
            }
            if (a[0] >= 24)
            {
                a[0] = a[0] % 24;
            }
            Console.WriteLine($"{a[0]} {a[1]} {a[2]}");