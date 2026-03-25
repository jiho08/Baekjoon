int x = int.Parse(Console.ReadLine());
            int n = int.Parse(Console.ReadLine());
            int s = 0;
            for (int i = 0; i < n; i++)
            {
                int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                s += arr[0] * arr[1];
            }
            if (x == s)
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }