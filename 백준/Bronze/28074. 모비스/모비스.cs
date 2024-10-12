string s = Console.ReadLine();
            bool b = false;

            if (s.Length < 5)
                Console.Write("NO");
            else
            {
                if (s.Contains("M"))
                    if (s.Contains("O"))
                        if (s.Contains("B"))
                            if (s.Contains("I"))
                                if (s.Contains("S"))
                                    b = true;

                Console.Write(b ? "YES" : "NO");
            }