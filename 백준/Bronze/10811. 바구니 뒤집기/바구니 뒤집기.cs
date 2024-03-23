int[] nm = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int n = nm[0];
            int m = nm[1];
            int[] basket = new int[n];
            int h = 0;

            for (int i = 0; i < basket.Length; i++)
            {
                basket[i] = i + 1;
            }

            for (int a = 0; a < m; a++)
            {
                int[] ij = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int i = ij[0] - 1;
                int j = ij[1] - 1;
                while (i < j)
                {
                    h = basket[i];
                    basket[i++] = basket[j];
                    basket[j--] = h;
                }
            }

            for (int i = 0; i < n; i++)
            {
                Console.Write($"{basket[i]} ");
            }