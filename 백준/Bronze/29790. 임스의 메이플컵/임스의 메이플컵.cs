int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int n = a[0], u = a[1], l = a[2];

            if (n >= 1000 && (u >= 8000 || l >= 260))
                Console.Write("Very Good");
            else if (n >= 1000)
                Console.Write("Good");
            else
                Console.Write("Bad");