int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            Array.Sort(a);
            for (int i = 0; i < a.Length; i++)
            {
                Console.WriteLine(a[i]);
            }