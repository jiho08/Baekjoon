int[] n = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
            int[] m = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);

            Console.WriteLine(n[0] + m[1] > n[1] + m[0]? n[1] + m[0] : n[0] + m[1]);