int[] l = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int s = 0;

            for (int i = 0; i < l[0]; ++i)
            {
                for (int j = i + 1; j < l[0]; ++j)
                {
                    for (int k = j + 1; k < l[0]; ++k)
                    {
                        int t = r[i] + r[j] + r[k];

                        if (t > s && t <= l[1])
                        {
                            s = t;
                        }
                    }
                }
            }

            Console.Write(s);