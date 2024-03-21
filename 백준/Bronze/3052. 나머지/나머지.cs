int[] arr = new int[10];
            bool[] barr = new bool[43];
            int c = 0;
            for (int i = 0; i < 10; i++)
            {
                arr[i] = int.Parse(Console.ReadLine()) % 42;
                barr[arr[i]] = true;
            }
            for (int i = 0; i < barr.Length - 1; i++)
            {
                if (barr[i])
                {
                    c++;
                }
            }
            Console.WriteLine(c);