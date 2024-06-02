int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] b = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] d = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int[,] f = new int[100, 100];
            
            int cnt = 0;

            for (int i = a[0]; i < a[2]; i++)
            {
                for (int j = a[1]; j < a[3]; j++)
                    f[i, j] = 1;
            }

            for (int i = b[0]; i < b[2]; i++)
            {
                for (int j = b[1]; j < b[3]; j++)
                    f[i, j] = 1;
            }

            for (int i = c[0]; i < c[2]; i++)
            {
                for (int j = c[1]; j < c[3]; j++)
                    f[i, j] = 1;
            }

            for (int i = d[0]; i < d[2]; i++)
            {
                for (int j = d[1]; j < d[3]; j++)
                    f[i, j] = 1;
            }

            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < 100; j++)
                {
                    if (f[i, j] == 1)
                        cnt++;
                }
            }
            Console.Write(cnt);