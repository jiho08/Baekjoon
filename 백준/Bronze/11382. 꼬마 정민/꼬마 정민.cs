string[] str = Console.ReadLine().Split(' ');
            long[] istr = Array.ConvertAll(str, long.Parse);
            Console.WriteLine(istr[0] + istr[1] + istr[2]);