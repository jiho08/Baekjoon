int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            while (a[0] != a[1] || a[0] != 0)
            {
                if (a[0] > a[1])
                {
                    Console.WriteLine("Yes");
                }
                else
                {
                    Console.WriteLine("No");
                }
                a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            }