string[] a = Console.ReadLine().Split(' ');
            int[] b = Array.ConvertAll(a, int.Parse);
            Console.WriteLine((b[0] + b[1]) % b[2]);
            Console.WriteLine(((b[0] % b[2])+ (b[1] % b[2])) % b[2]);
            Console.WriteLine((b[0] * b[1]) % b[2]);
            Console.WriteLine(((b[0] % b[2]) * (b[1] % b[2])) %b[2]);