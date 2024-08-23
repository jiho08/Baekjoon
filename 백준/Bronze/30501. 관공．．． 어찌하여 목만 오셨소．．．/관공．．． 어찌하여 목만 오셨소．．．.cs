int n = int.Parse(Console.ReadLine());
            string p = "";

            for (int i = 0; i < n; ++i)
            {
                string s = Console.ReadLine();

                if (s.Contains('S'))
                {
                    p = s;
                }
            }

            Console.Write(p);