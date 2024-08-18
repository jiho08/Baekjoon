string S = Console.ReadLine();

            if (S.Length < 2)
            {
                Console.WriteLine("CE");
                return;
            }

            if (S[0] == '"' && S[S.Length - 1] == '"')
            {
                string innerString = S.Substring(1, S.Length - 2);
                if (innerString.Length > 0)
                {
                    Console.WriteLine(innerString);
                }
                else
                {
                    Console.WriteLine("CE");
                }
            }
            else
            {
                Console.WriteLine("CE");
            }