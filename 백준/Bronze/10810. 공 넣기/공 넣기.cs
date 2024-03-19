int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int n = arr[0];
            int m = arr[1];
            int[] h = new int[n];
            for (int a = 0; a < m; a++)
            {
                int[] arr2 = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int i = arr2[0];
                int j = arr2[1];
                int k = arr2[2];
                for (int c = i - 1; c < j; c++)
                {
                    h[c] = k;
                }
            }
            for (int b = 0; b < n; b++)
            {
                Console.Write($"{h[b]} ");
            }