int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());

            string h = (a * b * c).ToString();
            int[] n = new int[10];

            for (int i = 0; i < h.Length; i++)
            {
                n[int.Parse(h[i].ToString())]++;
            }
            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine(n[i]);
            }