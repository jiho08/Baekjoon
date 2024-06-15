long[] r = Array.ConvertAll(Console.ReadLine().Split(),long.Parse);
        long s = 0;

        s = r[0] - r[1];

        if (s <= 0)
            s *= -1;

        Console.WriteLine(s);