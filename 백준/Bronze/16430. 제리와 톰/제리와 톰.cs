int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int s = n[1] - n[0];
            Console.Write($"{s} {n[1]}");