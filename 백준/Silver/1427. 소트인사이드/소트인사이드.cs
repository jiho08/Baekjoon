string s = Console.ReadLine();
            int[] n = new int[s.Length];


            for (int i = 0; i < s.Length; ++i)
                n[i] = int.Parse(s[i].ToString());

            Array.Sort(n);

            Array.Reverse(n);

            foreach (int t in n)
                Console.Write(t);