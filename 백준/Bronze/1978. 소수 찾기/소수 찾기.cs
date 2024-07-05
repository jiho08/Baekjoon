int n = int.Parse(Console.ReadLine());
            int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int c = 0;

            for (int i = 0; i < n; i++)
            {
                if (r[i] <= 1)
                    --c;

                for (int j = 2; j < r[i]; j++)
                {
                    if (r[i] % j == 0)
                    {
                        --c;
                        break;
                    }
                }
                ++c;
            }

            Console.Write(c);