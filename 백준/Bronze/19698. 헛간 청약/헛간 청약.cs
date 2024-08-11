int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int s = (a[1] / a[3]) * (a[2] / a[3]);
            Console.WriteLine(s > a[0] ? a[0] : s);