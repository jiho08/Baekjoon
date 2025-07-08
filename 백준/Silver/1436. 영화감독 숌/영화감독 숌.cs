int n = int.Parse(Console.ReadLine());
            int s = 666;
            int c = 0;

            while (true)
            {
                if (Convert.ToString(s).Contains("666"))
                {
                    c++;
                }
                if (n == c)
                {
                    break;
                }
                s++;
            }
            Console.Write(s);