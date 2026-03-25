while (true)
            {
                string str = Console.ReadLine();
                if (str == null)
                {
                    break;
                }
                string[] s = str.Split();
                int a = int.Parse(s[0]);
                int b = int.Parse(s[1]);
                Console.WriteLine(a + b);
            }