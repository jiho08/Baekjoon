int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        char[] st = new char[n[1]];
        for (int i = 0; i < n[0]; i++)
        {
            string s = Console.ReadLine();
            for (int j = 0; j < n[1]; j++)
            {
                st[j] = s[j];
            }
            Array.Reverse(st);
            Console.WriteLine(st);
        }