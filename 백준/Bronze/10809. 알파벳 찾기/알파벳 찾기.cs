string s = Console.ReadLine();

            for(int i = 97; i < 123; i++)
            {
                if (s.Contains(Convert.ToChar(i)))
                {
                    Console.Write(s.IndexOf(Convert.ToChar(i)));
                    Console.Write(" ");
                }
                else
                {
                    Console.Write("-1 ");
                }
            }
