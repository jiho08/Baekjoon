int n = int.Parse(Console.ReadLine());
        

        for (int i = 0; i < n; i++)
        {
            int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int r = a[0];

            for (int j = 1; j < a[1] % 4 + 4; j++)
            {
                r = (r * a[0]) % 10;
            }

            if (r == 0)
                r = 10;

            Console.WriteLine(r);
        }