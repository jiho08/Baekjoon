int t = int.Parse(Console.ReadLine());
            for (int i = 1; i <= t; i++)
            {
                string[] str = Console.ReadLine().Split(' ');
                int[] arr = Array.ConvertAll(str, int.Parse);
                Console.WriteLine($"Case #{i}: {arr[0] + arr[1]}");
            }