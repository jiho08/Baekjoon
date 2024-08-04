int n = int.Parse(Console.ReadLine());
            int s = 0;

            for (int i = 0; i < n; ++i)
            {
                int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                if (a[0] == 136)
                    s += 1000;
                else if (a[0] == 142)
                    s += 5000;
                else if (a[0] == 148)
                    s += 10000;
                else if (a[0] == 154)
                    s += 50000;
            }
            Console.WriteLine(s);