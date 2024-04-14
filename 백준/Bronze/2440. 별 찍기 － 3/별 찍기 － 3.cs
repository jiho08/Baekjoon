int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                for (int j = n; j > i; j--)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }