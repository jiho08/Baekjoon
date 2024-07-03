int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            while (n[0] != 0 && n[1] != 0 && n[2] != 0)
            {
                Array.Sort(n);

                if (Math.Pow(n[0], 2) + Math.Pow(n[1], 2) == Math.Pow(n[2], 2))
                    Console.WriteLine("right");
                else
                    Console.WriteLine("wrong");

                n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            }