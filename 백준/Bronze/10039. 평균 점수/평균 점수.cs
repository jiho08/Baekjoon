        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int c = int.Parse(Console.ReadLine());
        int d = int.Parse(Console.ReadLine());
        int e = int.Parse(Console.ReadLine());
        if (a < 40)
            a = 40;
        if (b < 40)
            b = 40;
        if (c < 40)
            c = 40;
        if (d < 40)
            d = 40;
        if (e < 40)
            e = 40;
        Console.WriteLine((a + b + c + d + e) / 5);