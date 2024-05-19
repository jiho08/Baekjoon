int n = int.Parse(Console.ReadLine());
        if (n < 100)
            Console.Write(n % 10 + n / 10);
        else if (n % 10 == 0)
            Console.Write(n / 100 + 10);
        else
            Console.Write(n % 100 + 10);