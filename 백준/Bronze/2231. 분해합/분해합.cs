int n = int.Parse(Console.ReadLine());
            string s = "";
            int r = 0;

            for (int i = 1; i <= n; ++i)
            {
                r = 0;
                s = i.ToString();

                for (int j = 0; j < s.Length; ++j)
                {
                    r += int.Parse(s[j].ToString());
                }

                if (int.Parse(s) + r == n)
                {
                    Console.WriteLine(s);
                    break;
                }
            }

            if (int.Parse(s) + r != n)
            {
                Console.WriteLine(0);
            }