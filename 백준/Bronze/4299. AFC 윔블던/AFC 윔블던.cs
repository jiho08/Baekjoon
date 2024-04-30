int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int a = arr[0] - arr[1];
            if (a < 0)
            {
                Console.WriteLine(-1);
            }
            else
            {
                if (a % 2 == 0)
                {
                    int b = a / 2 + arr[1];
                    int c = a / 2;
                    Console.WriteLine($"{b} {c}");
                }
                else
                {
                    Console.WriteLine(-1);
                }
            }