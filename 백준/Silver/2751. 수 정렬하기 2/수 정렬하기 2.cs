int n = int.Parse(Console.ReadLine());
            int[] r = new int[n];

            for (int i = 0; i < n; ++i)
                r[i] = int.Parse(Console.ReadLine());

            Array.Sort(r);

            Console.WriteLine(string.Join("\n", r));