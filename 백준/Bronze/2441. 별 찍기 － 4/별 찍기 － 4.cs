int n = int.Parse(Console.ReadLine());

        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < n - i; j++)
            {
                Console.Write(" ");
            }
            for (int j = i; j > 0; j--)
            {
                Console.Write('*');
            }
            Console.WriteLine();
        }