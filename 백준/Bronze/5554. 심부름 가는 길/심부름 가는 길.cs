int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int c = int.Parse(Console.ReadLine());
        int d = int.Parse(Console.ReadLine());

        int n = a + b + c + d;
        int m = 0;
        if (n >= 60)
        {
            m = n / 60;
            n = n % 60;
        }
        Console.WriteLine(m);
        Console.WriteLine(n);