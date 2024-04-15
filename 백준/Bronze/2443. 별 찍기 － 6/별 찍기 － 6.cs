int n = int.Parse(Console.ReadLine());
            for (int i = 1; i <= n * 2; i += 2)
            {
                for (int j = 1; j <= i / 2; j++)
                {
                    Console.Write(" ");
                }
                for (int j = n * 2; j - i > 0; j--)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }