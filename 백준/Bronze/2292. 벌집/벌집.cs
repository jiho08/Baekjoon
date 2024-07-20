int n = int.Parse(Console.ReadLine()), s = 1, c = 1;

            while (n > s)
            {
                s += 6 * c;
                ++c;
            }

            Console.Write(c);