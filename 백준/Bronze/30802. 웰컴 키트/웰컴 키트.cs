int[] a = new int[3];

            int p = int.Parse(Console.ReadLine());

            int[] t = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            for (int i = 0; i < 6; i++)
            {
                a[0] += t[i] / n[0];

                if (t[i] % n[0] != 0)
                    ++a[0];
            }

            a[1] = p / n[1];
            a[2] = p - n[1] * a[1];

            Console.Write($"{a[0]}\n{a[1]} {a[2]}");