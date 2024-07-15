int n = int.Parse(Console.ReadLine());
            int a = 0;

            for (int i = 1; i <= n; i++)
            {
                a += i;
            }

            Console.WriteLine(a);
            Console.WriteLine(Math.Pow(a, 2));
            Console.Write(Math.Pow(a, 2));