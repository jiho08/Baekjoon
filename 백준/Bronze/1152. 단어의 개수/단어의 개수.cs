string[] s = Console.ReadLine().Split();
            int l = s.Length;
            foreach (var str in s)
            {
                if (str == "")
                {
                    l--;
                }
            }
            Console.WriteLine(l);