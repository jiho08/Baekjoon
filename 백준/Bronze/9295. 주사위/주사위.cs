int n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= n; i++)
            {
                int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                r[0] += r[1];

                Console.WriteLine($"Case {i}: {r[0]}");
            }