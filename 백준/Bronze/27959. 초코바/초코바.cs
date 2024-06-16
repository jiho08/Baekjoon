int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

        if (r[0] * 100 >= r[1])
            Console.Write("Yes");
        else
            Console.Write("No");