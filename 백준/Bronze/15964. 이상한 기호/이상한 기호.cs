int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        Console.Write((n[0] + n[1]) * (n[0] - n[1]));