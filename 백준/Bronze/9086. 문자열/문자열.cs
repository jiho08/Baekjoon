int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                string s = Console.ReadLine();
                Console.WriteLine($"{s[0]}{s[s.Length - 1]}");
            }