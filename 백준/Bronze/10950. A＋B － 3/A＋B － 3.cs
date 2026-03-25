int t = int.Parse(Console.ReadLine());

            for (int i = 0; i < t; i++)
            {
                string[] str = Console.ReadLine().Split(' ');
                int[] a = Array.ConvertAll(str, int.Parse);
                Console.WriteLine(a[0] + a[1]);
            }