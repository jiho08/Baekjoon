string[] str = Console.ReadLine().Split(' ');
            int[] d = Array.ConvertAll(str, int.Parse);
            Array.Sort(d);
            int g;

            if ((d[0] == d[1]) && (d[1] == d[2]) && (d[0] == d[2]))
            {
                g = 10000 + d[0] * 1000;
            }
            else if ((d[0] == d[1]) || (d[1] == d[2]) || (d[0] == d[2]))
            {
                g = 1000 + d[1] * 100;
            }
            else
            {
                g = d[2] * 100;
            }
            Console.WriteLine(g);