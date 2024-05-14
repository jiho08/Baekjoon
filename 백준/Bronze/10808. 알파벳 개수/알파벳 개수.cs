string s = Console.ReadLine();
        int[] n = new int[26];
        int t = Convert.ToChar('a');

        for (int i = 0; i < s.Length; i++)
        {
            n[Convert.ToChar(s[i] - t)]++;
        }
        foreach (int item in n)
        {
            Console.Write($"{item} ");
        }