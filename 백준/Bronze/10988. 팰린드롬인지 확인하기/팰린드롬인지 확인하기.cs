string s = Console.ReadLine();
            char[] c = new char[s.Length];
            string s2 = "";
            for (int i = 0; i < s.Length; i++)
            {
                c[i] = s[s.Length - 1 - i];
            }
            for (int i = 0; i < c.Length; i++)
            {
                s2 += c[i];
            }
            if (s == s2)
            {
                Console.WriteLine(1);
            }
            else
            {
                Console.WriteLine(0);
            }