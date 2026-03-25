int n = int.Parse(Console.ReadLine());
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int maxn = arr.Max();
            int minn = arr.Min();
            Console.WriteLine($"{minn} {maxn}");