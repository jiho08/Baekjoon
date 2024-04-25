int[] arr = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
            int n = arr[0] * arr[1];
             n = n - arr[2];
            if (n < 0)
            {
                n = 0;
            }
            Console.WriteLine(n);