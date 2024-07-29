int[] n = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);

            if (n[1] < n[2])
                Console.Write("Bus");
            else if (n[2] >= n[0] && n[2] < n[1])
                Console.Write("Subway");
            else
                Console.Write("Anything");