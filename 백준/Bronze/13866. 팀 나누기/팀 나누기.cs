int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        Array.Sort(n);
        n[0] = n[0] + n[3];
        n[1] = n[1] + n[2];
        n[0] = n[0] - n[1];
        if (n[0] < 0)
            Console.Write(n[0] * -1);
        else
            Console.Write(n[0]);