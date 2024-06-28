int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++)
        {
            double[] r = Array.ConvertAll(Console.ReadLine().Split(), double.Parse);
            double x1 = r[0];
            double y1 = r[1];
            double r1 = r[2];
            double x2 = r[3];
            double y2 = r[4];
            double r2 = r[5];

            double d = Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2));

            if (d == 0)
            {
                if (r1 == r2)
                {
                    Console.WriteLine(-1);
                }
                else
                {
                    Console.WriteLine(0);
                }
            }
            else
            {
                if (r1 + r2 == d || Math.Abs(r1 - r2) == d)
                {
                    Console.WriteLine(1);
                }
                else if (Math.Abs(r1 - r2) < d && d < r1 + r2)
                {
                    Console.WriteLine(2);
                }
                else
                {
                    Console.WriteLine(0);
                }
            }
        }