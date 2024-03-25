int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int s = 0;
            for (int i = 0; i < n.Length; i++)
            {
                s += n[i] * n[i];
            }
            Console.WriteLine(s % 10);