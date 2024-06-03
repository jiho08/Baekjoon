int[] x = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] y = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int a = 0;

            if (x[1] < y[1])
                a = y[0] - x[0];
            else if (x[1] == y[1] && x[2] <= y[2])
                a = y[0] - x[0];
            else
                a = y[0] - x[0] - 1;

            Console.WriteLine(a);
            Console.WriteLine(y[0] - x[0] + 1);
            Console.WriteLine(y[0] - x[0]);