string s = Console.ReadLine();
            int c = 0;

            for (int i = 0; i < s.Length; ++i)
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    ++c;

            Console.Write(c);