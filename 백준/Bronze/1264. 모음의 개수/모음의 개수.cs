bool b = true;
            int c = 0;
            while (b)
            {
                string s = Console.ReadLine();
                if (s == "#")
                {
                    break;
                }
                for (int i = 0; i < s.Length; i++)
                {
                    switch (s[i])
                    {
                        case 'A':
                        case 'a':
                            c++;
                            break;
                        case 'E':
                        case 'e':
                            c++;
                            break;
                        case 'I':
                        case 'i':
                            c++;
                            break;
                        case 'O':
                        case 'o':
                            c++;
                            break;
                        case 'U':
                        case 'u':
                            c++;
                            break;
                    }
                }
                Console.WriteLine(c);
                c = 0;
            }