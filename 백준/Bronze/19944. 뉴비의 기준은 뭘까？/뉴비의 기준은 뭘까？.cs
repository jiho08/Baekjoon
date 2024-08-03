int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int n = a[0], m = a[1];

            if (m == 1 || m == 2)
                Console.Write("NEWBIE!");
            else if (m <= n)
                Console.Write("OLDBIE!");
            else
                Console.Write("TLE!");