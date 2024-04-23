bool b = true;
            while (b)
            {
                string[] s = Console.ReadLine().Split();
                int y = int.Parse(s[1]);
                int w = int.Parse(s[2]);
                if (y > 17 || w >= 80)
                {
                    Console.WriteLine($"{s[0]} Senior");
                }
                else if (s[0] == "#" && y == 0 && w == 0)
                {
                    b = false;
                }
                else
                {
                    Console.WriteLine($"{s[0]} Junior");
                }
            }