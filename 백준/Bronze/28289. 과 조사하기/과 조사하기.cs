int n = int.Parse(Console.ReadLine());
            int a = 0, b = 0, c = 0, d = 0;

            for (int i = 0; i < n; ++i)
            {
                int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                if (r[0] == 1)
                    ++d;
                else if (r[1] == 1 || r[1] == 2)
                    ++a;
                else if (r[1] == 3)
                    ++b;
                else
                    ++c;
            }

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
            Console.Write(d);