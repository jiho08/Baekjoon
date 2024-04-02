int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int a = n[0];
            int b = n[1];
            int nn = 0;
            int mm = 0;

            while (a > 0)
            {
                nn += a % 10;
                nn *= 10;
                a /= 10;
            }
            while (b > 0)
            {
                mm += b % 10;
                mm *= 10;
                b /= 10;
            }
            if (nn > mm)
            {
                nn /=10;
                Console.WriteLine(nn);
            }
            else
            {
                mm /= 10;
                Console.WriteLine(mm);
            }