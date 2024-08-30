int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int x = 1, y = 1, z = 1;

            for (int i = 1; i <= a[0]; ++i)
                x *= i;

            for (int i = 1; i <= a[1]; ++i)
                y *= i;

            for (int i = 1; i <= a[0] - a[1]; ++i)
                z *= i;

            Console.WriteLine(x / (z * y));