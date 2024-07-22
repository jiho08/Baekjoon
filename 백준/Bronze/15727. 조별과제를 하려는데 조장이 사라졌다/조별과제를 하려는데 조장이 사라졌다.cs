int n = int.Parse(Console.ReadLine());
            int s = 0;

            while (true)
            {
                n -= 5;
                ++s;

                if (n <= 0)
                {
                    break;
                }
            }

            Console.Write(s);