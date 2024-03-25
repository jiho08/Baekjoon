int a = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            int h = 0;
            for (int i = 0; i < s.Length; i++)
            {
                h += int.Parse(s[i].ToString());
            }
            Console.WriteLine(h);