int[] arr = new int[30];
            for (int i = 0; i < 28; i++)
            {
                int n = int.Parse(Console.ReadLine());
                arr[n - 1] = 1;
            }
            for (int j = 0; j < 30; j++)
            {
                if (arr[j] != 1)
                {
                    Console.WriteLine(j + 1);
                }
            }