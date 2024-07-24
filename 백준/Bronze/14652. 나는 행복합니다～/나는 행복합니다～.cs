int[] n = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);

            int a = n[2] / n[1];
            int b = n[2] % n[1];

            Console.WriteLine($"{a} {b}");