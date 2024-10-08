int[] r = new int[9];
            int s = 0;

            for (int i = 0; i < 9; ++i)
                r[i] = int.Parse(Console.ReadLine());

            Array.Sort(r);

            for (int i = 0; i < 9; ++i)
                s += r[i];

            for (int i = 0; i < 9; ++i)
                for (int j = 1; j <= 8; ++j)
                    if (s - r[i] - r[j] == 100)
                    {
                        for (int k = 0; k < 9; ++k)
                        {
                            if (k == i || k == j)
                                continue;

                            Console.WriteLine(r[k]);
                        }

                        i = 9;
                        break;
                    }