int n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; ++i)
            {
                int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                Console.WriteLine(a[0] * (a[2] - 1) + a[1]);
            }