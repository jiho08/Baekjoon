string n = Console.ReadLine();
            int zc = 0;
            int oc = 0;
            char[] s = new char[n.Length + 1];

            for (int i = 0; i < n.Length; ++i)
            {
                s[i] = n[i];
            }

            for (int i = 0; i < n.Length; i++)
            {
                if (s[i] != s[i + 1])
                {
                    if (s[i] == '0')
                        zc++;
                    else
                        oc++;
                }
            }
            Console.Write(zc > oc ? oc : zc);