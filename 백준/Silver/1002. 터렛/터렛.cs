int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++)
        {
            double[] r = Array.ConvertAll(Console.ReadLine().Split(), double.Parse);

            double d = Math.Sqrt(Math.Pow(r[3] - r[0], 2) + Math.Pow(r[4] - r[1], 2));

            if (d == 0)
            {
                if (r[2] == r[5])
                    Console.WriteLine(-1);
                else
                    Console.WriteLine(0);
            }
            else
            {
                if (r[2] + r[5] == d || Math.Abs(r[2] - r[5]) == d)
                    Console.WriteLine(1);
                else if (Math.Abs(r[2] - r[5]) < d && d < r[2] + r[5])
                    Console.WriteLine(2);
                else
                    Console.WriteLine(0);
            }
        }
