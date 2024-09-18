byte[] r = Array.ConvertAll(Console.ReadLine().Split(), byte.Parse);
            Console.Write(r[1] >= r[0] ? r[1] - r[0] : r[1] + r[0]);