string s = Console.ReadLine();

            if (s[0] == '"' && s[s.Length - 1] == '"' && s.Length > 2)
                Console.Write(s.Substring(1,s.Length - 2));
            else
                Console.Write("CE");