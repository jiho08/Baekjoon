int n = int.Parse(Console.ReadLine());
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    Console.Write("*");
                }
                for (int j = n * 2 - i * 2; j > 0; j--)
                {
                    Console.Write(" ");
                }
                for (int j = 0; j < i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            for (int i = n - 1; i >= 0; i--)
            {
                for (int j = i; j > 0; j--)
                {
                    Console.Write("*");
                }
                for (int j = n * 2 - i * 2; j > 0; j--)
                {
                    Console.Write(" ");
                }
                for (int j = i; j > 0; j--)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }