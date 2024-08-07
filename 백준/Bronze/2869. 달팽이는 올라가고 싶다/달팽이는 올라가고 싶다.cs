int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            Console.Write((r[2] - r[1] - 1) / (r[0] - r[1]) + 1);