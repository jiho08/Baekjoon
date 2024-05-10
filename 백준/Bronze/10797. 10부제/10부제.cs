int d = int.Parse(Console.ReadLine());
        int[] c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int t = 0;
        foreach (int i in c)
            if (d == i)
                t++;
        Console.Write(t);