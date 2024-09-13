byte[] r = Array.ConvertAll(Console.ReadLine().Split(), byte.Parse);
            byte s = 0;
            r[0] /= 2;

            while (true)
            {
                if (r[0] == r[1])
                {
                    Console.Write(r[0]);
                    break;
                }

                if (r[0] <= 0 || r[1] <= 0)
                {
                    Console.Write(s);
                    break;
                }

                --r[0];
                --r[1];
                ++s;
            }