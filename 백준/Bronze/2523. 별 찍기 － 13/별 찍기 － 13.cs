int n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < i + 1; ++j)
                {
                    Console.Write('*');
                }

                Console.WriteLine();
            }

            for (int i = n - 1; i > 0; --i)
            {
                for (int j = i; j > 0; --j)
                {
                    Console.Write('*');
                }

                Console.WriteLine();
            }