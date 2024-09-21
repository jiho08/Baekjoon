string r = Console.ReadLine();
            int s = 1;

            for (int i = 0; i < r.Length - 1; ++i)
                if (r[i] == ',')
                    ++s;
            Console.Write(s);