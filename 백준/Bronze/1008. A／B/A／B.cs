string[] a = Console.ReadLine().Split(' ');
            double[] b = Array.ConvertAll(a, double.Parse);
            Console.WriteLine(b[0] / b[1]);