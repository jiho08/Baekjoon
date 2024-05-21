int[] n = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
        int m = int.Parse(Console.ReadLine()) * 2;
        if (n[0] + n[1] >= m)
            Console.Write((n[0] + n[1]) - m);
        else
            Console.Write(n[0] + n[1]);