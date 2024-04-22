int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                string a = Console.ReadLine();
                if (a.Length >= 6 && a.Length <= 9)
                {
                    Console.WriteLine("yes");
                }
                else
                {
                    Console.WriteLine("no");
                }
            }