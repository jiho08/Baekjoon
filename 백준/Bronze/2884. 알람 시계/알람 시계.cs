string[] str = Console.ReadLine().Split(' ');
            int[] t = Array.ConvertAll(str, int.Parse);
            if (t[1] < 45)
            {
                t[1] += 15;
                t[0] = t[0] > 0 ? t[0] - 1 : 23;
            }
            else
            {
                t[1] -= 45;
            }
            Console.WriteLine($"{t[0]} {t[1]}");